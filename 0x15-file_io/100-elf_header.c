#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>

/**
 * struct ELF - elf header structure
 */
typedef struct{
    uint8_t e_ident[16];
    uint16_t e_type;
    uint16_t e_machine;
    uint32_t e_version;
    uint32_t e_entry;
    uint32_t e_phoff;
    uint32_t e_shoff;
    uint32_t e_flags;
    uint16_t e_ehsize;
    uint16_t e_phentsize;
    uint16_t e_phnum;
    uint16_t e_shentsize;
    uint16_t e_shnum;
    uint16_t e_shstrndx;
}ELF;
/**
 * print_os - print os info
 * @elf: elf
 * Return: void
 */
void print_os(ELF *elf)
{
	printf("OS/ABI:\t\t\t");
	switch (elf->e_ident[7])
	{
		case 0x00:
			printf("UNIX - System V\n");
			break;
		case 0x01:
			printf("HP-UX\n");
			break;
		case 0x02:
			printf("NET BSD\n");
			break;
		case 0x03:
			printf("Linux\n");
			break;
		case 0x04:
			printf("HP-UX\n");
			break;
		case 0x05:
			printf("GNU Hurd\n");
			break;
		case 0x06:
			printf("Solaris\n");
			break;
		case 0x07:
			printf("AIX\n");
			break;
		case 0x08:
			printf("IRIX\n");
			break;
		case 0x09:
			printf("FreeBSD\n");
			break;
		case 0x0A:
			printf("TRU64\n");
			break;
		default:
			printf("UNIX - System V\n");
	}
}

/**
 * print_type - prints type of elf file
 * @elf: elf
 * Return: void
 */
void print_type(ELF *elf)
{
	printf("Type:\t\t\t");
	switch (elf->e_type)
	{
		case 0x00:
			printf("NONE\n");
			break;
		case 0x01:
			printf("REL\n");
			break;
		case 0x02:
			printf("EXEC (Excutable file)\n");
			break;
		case 0x03:
			printf("DYN\n");
			break;
		case 0x04:
			printf("CORE\n");
			break;
		case 0x05:
			printf("LOOS\n");
			break;
		case 0x06:
			printf("HIOS\n");
			break;
		case 0x07:
			printf("LOPROC\n");
			break;
		case 0x08:
			printf("HIPROC\n");
			break;
		default:
			printf("EXEC (Excutable file)\n");
	}
}
/**
 * main - entry point
 * @ac: Arguments count
 * @av: Arguments values
 * Return: 0 when succeed
 */
int main(int ac, char **av)
{
	ELF elf;
	FILE *file;
	int i = 0;

	if (ac != 2)
	{
		dprintf(2, "Usage: elf_header elf_filename\n");
		exit(98);
	}
	file = fopen(av[1], "rb");
	if (file)
		fread(&elf, sizeof(elf), 1, file);
	printf("ELF Header\n");
	printf("Magic:\t");
	for (i = 0; i < 16; i++)
	{
		printf("%02x ", elf.e_ident[i]);
	}
	printf("\nClass:\t\t\t");
	if (elf.e_ident[4] == 1)
		printf("ELF32\n");
	else
		printf("ELF64\n");
	printf("Data:\t\t\t");
	if (elf.e_ident[5] == 1)
		printf("2's complement, little endian\n");
	else
		printf("big endian\n");
	printf("Version:\t\t%x (current)\n", elf.e_ident[6]);
	print_os(&elf);
	printf("ABI Version:\t\t%x\n", elf.e_ident[8]);
	print_type(&elf);
	printf("Entry point address:\t0x%x\n", elf.e_entry);
	return (0);
}
