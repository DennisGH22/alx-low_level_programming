#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>
#include <elf.h>

/**
 * print_error - Print the error message.
 * @msg: The error message.
*/

void print_error(char *msg) {
    dprintf(STDERR_FILENO, "Error: %s\n", msg);
}

/**
 * main - Displays the information contained in the ELF header
 * at the start of an ELF file.
 * @argc: The number of arguments passed to the program.
 * @argv: The array of pointers to the arguments.
*/

int main(int argc, char **argv) {
	int file;

    if (argc != 2)
        print_error("Usage: elf_header elf_filename"),
        exit(98);

    file = open(argv[1], O_RDONLY);
    if (file == -1)
        print_error("Unable to open file"),
        exit(98);

    Elf64_Ehdr header;
    if (read(file, &header, sizeof(header)) != sizeof(header))
        print_error("Unable to read ELF header"),
        exit(98);

    if (header.e_ident[EI_MAG0] != ELFMAG0 ||
        header.e_ident[EI_MAG1] != ELFMAG1 ||
        header.e_ident[EI_MAG2] != ELFMAG2 ||
        header.e_ident[EI_MAG3] != ELFMAG3)
        print_error("File is not an ELF file"),
        exit(98);

    printf("Magic:   ");
    for (int i = 0; i < EI_NIDENT; i++)
        printf("%02x ", header.e_ident[i]);
    printf("\n");

    printf("Class:                             ");
    switch (header.e_ident[EI_CLASS])
	{
        case ELFCLASSNONE: printf("none\n"); break;
        case ELFCLASS32: printf("ELF32\n"); break;
        case ELFCLASS64: printf("ELF64\n"); break;
        default: printf("<unknown>\n"); break;
    }

    printf("Data:                              ");
    switch (header.e_ident[EI_DATA]) 
	{
        case ELfileATANONE: printf("none\n"); break;
        case ELfileATA2LSB: printf("2's complement, little endian\n"); break;
        case ELfileATA2MSB: printf("2's complement, big endian\n"); break;
        default: printf("<unknown>\n"); break;
    }

    printf("Version:                           %d\n", header.e_ident[EI_VERSION]);

    printf("OS/ABI:                            ");
    switch (header.e_ident[EI_OSABI])
	{
        case ELFOSABI_SYSV: printf("UNIX - System V\n"); break;
        case ELFOSABI_HPUX: printf("UNIX - HP-UX\n"); break;
        case ELFOSABI_NETBSD: printf("UNIX - NetBSD\n"); break;
        case ELFOSABI_LINUX: printf("UNIX - GNU\n"); break;
        case ELFOSABI_SOLARIS: printf("UNIX - Solaris\n"); break;
        case ELFOSABI_AIX: printf("UNIX - AIX\n"); break;
        case ELFOSABI_IRIX: printf("UNIX - IRIX\n"); break;
        case ELFOSABI_FREEBSD: printf("UNIX - FreeBSD\n"); break;
        case ELFOSABI_TRU64: printf("UNIX - TRU64\n"); break;
        case ELFOSABI_MODESTO: printf("Novell - Modesto\n"); break;
        case ELFOSABI_OPENBSD: printf("UNIX - OpenBSD\n"); break;
        case ELFOSABI_ARM: printf("ARM\n"); break;
        case ELFOSABI_STANDALONE: printf("Standalone App\n"); break;
        default: printf("<unknown>\n"); break;
    }
}
