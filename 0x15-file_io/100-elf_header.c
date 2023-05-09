#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>
#include "elf.h"

void print_error(char *message);
void print_usage(char *program_name);

char *get_elf_class(unsigned char elf_class);
char *get_data_encoding(unsigned char encoding);
char *get_os_abi(unsigned char os_abi);

int main(int argc, char **argv)
{
    int fd, i;
    ssize_t nread;
    Elf64_Ehdr header;
    char *filename = argv[1];

    if (argc != 2)
    {
        print_usage(argv[0]);
        return 98;
    }

    fd = open(filename, O_RDONLY);
    if (fd == -1)
    {
        print_error("Error opening file");
        return 98;
    }

    nread = read(fd, &header, sizeof(header));
    if (nread != sizeof(header))
    {
        print_error("Error reading ELF header");
        return 98;
    }

    printf("ELF Header:\n");
    printf("  Magic:   ");
    for (i = 0; i < EI_NIDENT; i++)
    {
        printf("%02x ", header.e_ident[i]);
    }
    printf("\n");
    printf("  Class:                             %s\n", get_elf_class(header.e_ident[EI_CLASS]));
    printf("  Data:                              %s\n", get_data_encoding(header.e_ident[EI_DATA]));
    printf("  Version:                           %d%s\n", header.e_ident[EI_VERSION], header.e_ident[EI_VERSION] == EV_CURRENT ? " (current)" : "");
    printf("  OS/ABI:                            %s\n", get_os_abi(header.e_ident[EI_OSABI]));
    printf("  ABI Version:                       %d\n", header.e_ident[EI_ABIVERSION]);
    printf("  Type:                              0x%x\n", header.e_type);
    printf("  Entry point address:               0x%llu\n", header.e_entry);
    printf("\n");

    if (close(fd) == -1)
    {
        print_error("Error closing file");
        return 100;
    }

    return 0;
}

void print_error(char *message)
{
    fprintf(stderr, "Error: %s\n", message);
}

void print_usage(char *program_name)
{
    fprintf(stderr, "Usage: %s elf_filename\n", program_name);
}

char *get_elf_class(unsigned char elf_class)
{
    switch (elf_class)
    {
        case ELFCLASS32:
            return "ELF32";
        case ELFCLASS64:
            return "ELF64";
        default:
            return "Invalid class";
    }
}

char *get_data_encoding(unsigned char encoding)
{
    switch (encoding)
    {
        case ELFDATA2LSB:
            return "2's complement, little endian";
        case ELFDATA2MSB:
            return "2's complement, big endian";
        default:
            return "Invalid encoding";
    }
}

char *get_os_abi(unsigned char os_abi)
{
    switch (os_abi)
	{
        case ELFOSABI_SYSV: return "UNIX System V ABI";
        case ELFOSABI_HPUX: return "HP-UX ABI";
        case ELFOSABI_NETBSD: return "NetBSD ABI";
        case ELFOSABI_LINUX: return "Linux ABI";
        case ELFOSABI_IRIX: return "IRIX ABI";
        case ELFOSABI_FREEBSD: return "FreeBSD ABI";
        case ELFOSABI_TRU64: return "TRU64 UNIX ABI";
        case ELFOSABI_ARM: return "ARM architecture ABI";
        case ELFOSABI_STANDALONE: return "Standalone (embedded) ABI";
        default: return "Unknown";
    }
}
