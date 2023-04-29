#include "main.h"

/**
 * chck_elf - func check if the file is an ELF file.
 * @e_id: pointer to array of the ELF magic numbers.
 *
 * exit code 98: if the file is not an ELF file.
 */
void chck_elf(unsigned char *e_id)
{
	int i;

	for (i = 0; i < 4; i++)
	{
		if (e_id[i] != 127 &&
		    e_id[i] != 'E' &&
		    e_id[i] != 'L' &&
		    e_id[i] != 'F')
		{
			dprintf(STDERR_FILENO, "Error: Not an ELF file\n");
			exit(98);
		}
	}
}

/**
 * prnt_magic - func print magic numbers of an ELF header.
 * @e_id: pointer to array of the ELF magic numbers.
 *
 * Magic numbers separated by spaces.
 */
void prnt_magic(unsigned char *e_id)
{
	int i;

	printf("  Magic:   ");

	for (i = 0; i < EI_NIDENT; i++)
	{
		printf("%02x", e_id[i]);

		if (i == EI_NIDENT - 1)
			printf("\n");
		else
			printf(" ");
	}
}

/**
 * prnt_class - func print class of an ELF header.
 * @e_id: pointer to an array of the ELF class.
 */
void prnt_class(unsigned char *e_id)
{
	printf("  Class:                             ");

	switch (e_id[EI_CLASS])
	{
	case ELFCLASSNONE:
		printf("none\n");
		break;
	case ELFCLASS32:
		printf("ELF32\n");
		break;
	case ELFCLASS64:
		printf("ELF64\n");
		break;
	default:
		printf("<unknown: %x>\n", e_id[EI_CLASS]);
	}
}

/**
 * prnt_data - func print data of an ELF header.
 * @e_id: pointer to array of the ELF class.
 */
void prnt_data(unsigned char *e_id)
{
	printf("  Data:                              ");

	switch (e_id[EI_DATA])
	{
	case ELFDATANONE:
		printf("none\n");
		break;
	case ELFDATA2LSB:
		printf("2's complement, little endian\n");
		break;
	case ELFDATA2MSB:
		printf("2's complement, big endian\n");
		break;
	default:
		printf("<unknown: %x>\n", e_id[EI_CLASS]);
	}
}

/**
 * prnt_version - func prints version of an ELF header.
 * @e_id: pointer to  array of the ELF version.
 */
void prnt_version(unsigned char *e_id)
{
	printf("  Version:                           %d",
	       e_id[EI_VERSION]);

	switch (e_id[EI_VERSION])
	{
	case EV_CURRENT:
		printf(" (current)\n");
		break;
	default:
		printf("\n");
		break;
	}
}

/**
 * prnt_osabi - func print the OS/ABI of ELF header.
 * @e_id: pointer to array of the ELF version.
 */
void prnt_osabi(unsigned char *e_id)
{
	printf("  OS/ABI:                            ");

	switch (e_id[EI_OSABI])
	{
	case ELFOSABI_NONE:
		printf("UNIX - System V\n");
		break;
	case ELFOSABI_HPUX:
		printf("UNIX - HP-UX\n");
		break;
	case ELFOSABI_NETBSD:
		printf("UNIX - NetBSD\n");
		break;
	case ELFOSABI_LINUX:
		printf("UNIX - Linux\n");
		break;
	case ELFOSABI_SOLARIS:
		printf("UNIX - Solaris\n");
		break;
	case ELFOSABI_IRIX:
		printf("UNIX - IRIX\n");
		break;
	case ELFOSABI_FREEBSD:
		printf("UNIX - FreeBSD\n");
		break;
	case ELFOSABI_TRU64:
		printf("UNIX - TRU64\n");
		break;
	case ELFOSABI_ARM:
		printf("ARM\n");
		break;
	case ELFOSABI_STANDALONE:
		printf("Standalone App\n");
		break;
	default:
		printf("<unknown: %x>\n", e_id[EI_OSABI]);
	}
}

/**
 * prnt_abi - func print the ABI version of ELF header.
 * @e_id: pointer to array of ELF ABI version.
 */
void prnt_abi(unsigned char *e_id)
{
	printf("  ABI Version:                       %d\n",
	       e_id[EI_ABIVERSION]);
}

/**
 * prnt_type - func print type of ELF header.
 * @e_type: ELF type.
 * @e_id: pointer to array of the ELF class.
 */
void prnt_type(unsigned int e_typ, unsigned char *e_id)
{
	if (e_id[EI_DATA] == ELFDATA2MSB)
		e_typ >>= 8;

	printf("  Type:                              ");

	switch (e_typ)
	{
	case ET_NONE:
		printf("NONE (None)\n");
		break;
	case ET_REL:
		printf("REL (Relocatable file)\n");
		break;
	case ET_EXEC:
		printf("EXEC (Executable file)\n");
		break;
	case ET_DYN:
		printf("DYN (Shared object file)\n");
		break;
	case ET_CORE:
		printf("CORE (Core file)\n");
		break;
	default:
		printf("<unknown: %x>\n", e_typ);
	}
}

/**
 * prnt_entry - func print entry point of ELF header.
 * @e_entry: address of ELF entry point.
 * @e_id: pointer to array of ELF class.
 */
void prnt_entry(unsigned long int e_entry, unsigned char *e_id)
{
	printf("  Entry point address:               ");

	if (e_id[EI_DATA] == ELFDATA2MSB)
	{
		e_entry = ((e_entry << 8) & 0xFF00FF00) |
			  ((e_entry >> 8) & 0xFF00FF);
		e_entry = (e_entry << 16) | (e_entry >> 16);
	}

	if (e_id[EI_CLASS] == ELFCLASS32)
		printf("%#x\n", (unsigned int)e_entry);

	else
		printf("%#lx\n", e_entry);
}

/**
 * close_elf - func close ELF file.
 * @elf: The file descriptor of the ELF file.
 *
 * exit code 98 - if the file cannot be closed.
 */
void close_elf(int elf)
{
	if (close(elf) == -1)
	{
		dprintf(STDERR_FILENO,
			"Error: Can't close fd %d\n", elf);
		exit(98);
	}
}

/**
 * main - func print info in the ELF header at start of ELF file.
 * @ac: number of arguments.
 * @av: array of arguments.
 *
 * Return: 0 on success.
 * exit code 98 : if the file is not an ELF File
 * or the function fails.
 */
int main(int __attribute__((__unused__)) ac, char *av[])
{
	Elf64_Ehdr *header;
	int o, r;

	o = open(av[1], O_RDONLY);
	if (o == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read file %s\n", av[1]);
		exit(98);
	}
	header = malloc(sizeof(Elf64_Ehdr));
	if (header == NULL)
	{
		close_elf(o);
		dprintf(STDERR_FILENO, "Error: Can't read file %s\n", av[1]);
		exit(98);
	}
	r = read(o, header, sizeof(Elf64_Ehdr));
	if (r == -1)
	{
		free(header);
		close_elf(o);
		dprintf(STDERR_FILENO, "Error: `%s`: No such file\n", av[1]);
		exit(98);
	}

	chck_elf(header->e_id);
	printf("ELF Header:\n");
	prnt_magic(header->e_id);
	prnt_class(header->e_id);
	prnt_data(header->e_id);
	prnt_version(header->e_id);
	prnt_osabi(header->e_id);
	prnt_abi(header->e_id);
	prnt_type(header->e_typ, header->e_id);
	prnt_entry(header->e_entry, header->e_id);

	free(header);
	close_elf(o);
	return (0);
}
