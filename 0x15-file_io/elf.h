#ifndef ELF_H
#define ELF_H

#include <stddef.h>
#include <stdint.h>

#define EI_NIDENT 16
#define ELFOSABI_STANDALONE 255
#define ELFOSABI_ARM 97
#define ELFOSABI_TRU64 12
#define ELFOSABI_FREEBSD 9
#define ELFOSABI_IRIX 8
#define ELFOSABI_SOLARIS 6
#define ELFOSABI_LINUX 3
#define ELFOSABI_NETBSD 2
#define ELFOSABI_HPUX 0x06
#define ELFOSABI_SYSV 0x00

typedef uint32_t   Elf32_Addr;
typedef uint16_t   Elf32_Half;
typedef uint32_t   Elf32_Off;
typedef int32_t    Elf32_Sword;
typedef uint32_t   Elf32_Word;

typedef uint64_t   Elf64_Addr;
typedef uint16_t   Elf64_Half;
typedef int16_t    Elf64_SHalf;
typedef uint64_t   Elf64_Off;
typedef int32_t    Elf64_Sword;
typedef uint32_t   Elf64_Word;
typedef int64_t    Elf64_Sxword;
typedef uint64_t   Elf64_Xword;

/* ELF header structure */
typedef struct {
    unsigned char e_ident[16]; /* ELF identification */
    uint16_t e_type;           /* Object file type */
    uint16_t e_machine;        /* Machine type */
    uint32_t e_version;        /* Object file version */
    uint64_t e_entry;          /* Entry point address */
    uint64_t e_phoff;          /* Program header offset */
    uint64_t e_shoff;          /* Section header offset */
    uint32_t e_flags;          /* Processor-specific flags */
    uint16_t e_ehsize;         /* ELF header size */
    uint16_t e_phentsize;      /* Size of program header entry */
    uint16_t e_phnum;          /* Number of program header entries */
    uint16_t e_shentsize;      /* Size of section header entry */
    uint16_t e_shnum;          /* Number of section header entries */
    uint16_t e_shstrndx;       /* Section name string table index */
} Elf64_Ehdr;

/* Section header structure */
typedef struct {
    uint32_t sh_name;      /* Section name (string tbl index) */
    uint32_t sh_type;      /* Section type */
    uint64_t sh_flags;     /* Section flags */
    uint64_t sh_addr;      /* Section virtual addr at execution */
    uint64_t sh_offset;    /* Section file offset */
    uint64_t sh_size;      /* Section size in bytes */
    uint32_t sh_link;      /* Link to another section */
    uint32_t sh_info;      /* Additional section information */
    uint64_t sh_addralign; /* Section alignment */
    uint64_t sh_entsize;   /* Entry size if section holds table */
} Elf64_Shdr;

/* Program header structure */
typedef struct {
    uint32_t p_type;   /* Type of segment */
    uint32_t p_flags;  /* Segment attributes */
    uint64_t p_offset; /* Offset in file */
    uint64_t p_vaddr;  /* Virtual address in memory */
    uint64_t p_paddr;  /* Reserved */
    uint64_t p_filesz; /* Size of segment in file */
    uint64_t p_memsz;  /* Size of segment in memory */
    uint64_t p_align;  /* Alignment of segment */
} Elf64_Phdr;

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

#define ET_NONE     0
#define ET_REL      1
#define ET_EXEC     2
#define ET_DYN      3
#define ET_CORE     4
#define ET_LOPROC   0xff00
#define ET_HIPROC   0xffff

#define EM_NONE     0
#define EM_M32      1
#define EM_SPARC    2
#define EM_386      3
#define EM_68K      4
#define EM_88K      5
#define EM_860      7
#define EM_MIPS     8
#define EM_ARM      40
#define EM_X86_64   62

#define EV_NONE     0
#define EV_CURRENT  1

#define ELFCLASSNONE 0
#define ELFCLASS32   1
#define ELFCLASS64   2

#define ELFDATANONE  0
#define ELFDATA2LSB  1
#define ELFDATA2MSB  2

#define PT_NULL     0
#define PT_LOAD     1
#define PT_DYNAMIC  2
#define PT_INTERP   3
#define PT_NOTE     4
#define PT_SHLIB    5
#define PT_PHDR     6
#define PT_LOPROC   0x70000000
#define PT_HIPROC   0x7fffffff

#define SHT_NULL     0
#define SHT_PROGBITS 1
#define SHT_SYMTAB   2
#define SHT_STRTAB   3
#define SHT_RELA     4
#define SHT_HASH     5
#define SHT_DYNAMIC  6
#define SHT_NOTE     7
#define SHT_NOBITS   8
#define SHT_REL      9
#define SHT_SHLIB    10
#define SHT_DYNSYM   11
#define SHT_LOOS     0x60000000
#define SHT_HIOS     0x6fffffff
#define SHT_LOPROC   0x70000000
#define SHT_HIPROC   0x7fffffff
#define SHT_LOUSER   0x80000000
#define SHT_HIUSER   0xffffffff

#endif
