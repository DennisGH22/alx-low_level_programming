#ifndef ELF_H
#define ELF_H

#include <stdint.h>

#define EI_NIDENT 16

typedef uint16_t Elf32_Half;
typedef uint32_t Elf32_Word;
typedef uint32_t Elf32_Addr;
typedef uint32_t Elf32_Off;

typedef struct {
    unsigned char e_ident[EI_NIDENT];
    Elf32_Half    e_type;
    Elf32_Half    e_machine;
    Elf32_Word    e_version;
    Elf32_Addr    e_entry;
    Elf32_Off     e_phoff;
    Elf32_Off     e_shoff;
    Elf32_Word    e_flags;
    Elf32_Half    e_ehsize;
    Elf32_Half    e_phentsize;
    Elf32_Half    e_phnum;
    Elf32_Half    e_shentsize;
    Elf32_Half    e_shnum;
    Elf32_Half    e_shstrndx;
} Elf32_Ehdr;

/* Values for e_ident[] */
#define EI_MAG0       0
#define EI_MAG1       1
#define EI_MAG2       2
#define EI_MAG3       3
#define EI_CLASS      4
#define EI_DATA       5
#define EI_VERSION    6
#define EI_OSABI      7
#define EI_ABIVERSION 8
#define EI_PAD        9

/* Values for e_ident[EI_MAG0-3] */
#define ELFMAG0       0x7f
#define ELFMAG1       'E'
#define ELFMAG2       'L'
#define ELFMAG3       'F'

/* Values for e_ident[EI_CLASS] */
#define ELFCLASSNONE  0
#define ELFCLASS32    1
#define ELFCLASS64    2

/* Values for e_ident[EI_DATA] */
#define ELFDATANONE   0
#define ELFDATA2LSB   1
#define ELFDATA2MSB   2

/* Values for e_type */
#define ET_NONE       0
#define ET_REL        1
#define ET_EXEC       2
#define ET_DYN        3
#define ET_CORE       4
#define ET_LOPROC     0xff00
#define ET_HIPROC     0xffff

/* Values for e_machine */
#define EM_NONE       0
#define EM_M32        1
#define EM_SPARC      2
#define EM_386        3
#define EM_68K        4
#define EM_88K        5
#define EM_860        7
#define EM_MIPS       8

#endif
