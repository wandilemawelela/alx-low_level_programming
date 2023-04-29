#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <fcntl.h>
#include <unistd.h>
#include <errno.h>
#include <elf.h>

void print_error(char *message);
void print_elf_header_info(Elf64_Ehdr *header);

/**
  * main - displays the information contained in the ELF header at the start
  * of an ELF file
  * @argc: Argc
  * @argv: Argv
  * Return: Always 0.
  */

int main(int argc, char *argv[])
{
	int fd;
	Elf64_Ehdr header = {0};

	if (argc != 2)
	{
		fprintf(stderr, "Usage: %s elf_filename\n", argv[0]);
		exit(98);
	}

	fd = open(argv[1], O_RDONLY);

	if (fd == -1)
	{
		print_error("Error opening file");
	}

	if (read(fd, &header, sizeof(header)) != sizeof(header))
	{
		print_error("Error reading ELF header");
	}

	if (memcmp(header.e_ident, ELFMAG, SELFMAG) != 0)
	{
		print_error("File is not an ELF file");
	}

	print_elf_header_info(&header);

	if (close(fd) == -1)
	{
		print_error("Error closing file");
	}

	return (0);
}

/**
  * print_error - prints error
  * @message: Error message
  */

void print_error(char *message)
{
	fprintf(stderr, "%s: %s\n", message, strerror(errno));
	exit(98);
}

/**
  * print_elf_header_info - Prints elf header information
  * @header: Header
  */

void print_elf_header_info(Elf64_Ehdr *header)
{
	int i;

	printf("ELF Header:\n");
	printf("  Magic:   ");

	for (i = 0; i < EI_NIDENT; i++)
	{
		printf("%02x ", header->e_ident[i]);
	}

	printf("\n");
	printf("  Class:                             %s\n",
			(header->e_ident[EI_CLASS] == ELFCLASS64)
			? "ELF64" : "Unknown");
	printf("  Data:                              %s\n",
			(header->e_ident[EI_DATA] == ELFDATA2LSB)
			? "2's complement, little endian" : "Unknown");
	printf("  Version:                           %d (current)\n",
			header->e_ident[EI_VERSION]);
	printf("  OS/ABI:                            ");

	switch (header->e_ident[EI_OSABI])
	{
		case ELFOSABI_SYSV:
			printf("UNIX - System V\n");
			break;
		case ELFOSABI_HPUX:
			printf("HP-UX\n");
			break;
		case ELFOSABI_NETBSD:
			printf("NetBSD\n");
			break;
		case ELFOSABI_LINUX:
			printf("Linux\n");
			break;
		case ELFOSABI_SOLARIS:
			printf("Solaris\n");
			break;
		case ELFOSABI_IRIX:
			printf("IRIX\n");
			break;
		case ELFOSABI_FREEBSD:
			printf("FreeBSD\n");
			break;
		case ELFOSABI_TRU64:
			printf("Compaq TRU64 UNIX\n");
			break;
		case ELFOSABI_ARM:
			printf("ARM architecture\n");
			break;
		case ELFOSABI_STANDALONE:
			printf("Standalone (embedded) application\n");
			break;
		default:
			printf("Unknown\n");
			break;
	}

	printf("  ABI Version:                       %d\n",
			header->e_ident[EI_ABIVERSION]);
	printf("  Type:                              0x%x\n", header->e_type);
	printf("  Machine:                           0x%x\n",
			header->e_machine);
	printf("  Version:                           0x%x\n",
			header->e_version);
	printf("  Entry point address:               0x%lx\n",
			header->e_entry);
	printf("  Start of program headers:          %ld (bytes into file)\n",
			header->e_phoff);
	printf("  Start of section headers:          %ld (bytes into file)\n",
			header->e_shoff);
	printf("  Flags:                             0x%x\n", header->e_flags);
	printf("  Size of this header:               %d (bytes)\n",
			header->e_ehsize);
	printf("  Size of program headers:           %d (bytes)\n",
			header->e_phentsize);
	printf("  Number of program headers:         %d\n", header->e_phnum);
	printf("  Size of section headers:           %d (bytes)\n",
			header->e_shentsize);
	printf("  Number of section headers:         %d\n", header->e_shnum);
	printf("  Section header string table index: %d\n",
			header->e_shstrndx);
}
