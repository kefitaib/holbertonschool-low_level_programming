#include "holberton.h"
#include <stdio.h>
#include <elf.h>


/**
 * test_open - check if the file was closed.
 * @x : the close result.
 * Return: void.
 */


void test_open(int x)
{
	if (x == -1)
	{
		dprintf(STDERR_FILENO, "Usage: elf_header elf_filename\n");
		exit(98);
	}

}


/**
 * test_close - check if the file was closed.
 * @x : the close result.
 * Return: void.
 */


void test_close(int x)
{
	if (x == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", x);
		exit(100);
	}
}



/**
 * test_read - check if the file was closed.
 * @s : file name.
 * @x : the close result.
 * Return: void.
 */


void test_read(int x, char s[])
{
	if (x == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", s);
		exit(99);
	}
}


/**
 * _type - print type.
 * @x : type.
 * Return: void.
 */

void _type(int x)
{
	int nb;

	printf("  Type:");
	for (nb = 6; nb < 36; nb++)
		putchar(' ');

	switch (x)
	{
	case 0:
		printf("NONE (No file type)\n");
	case 1:
		printf("REL (Relocatable file)\n");
		break;
	case 2:
		printf("EXEC (Executable file)\n");
		break;
	case 3:
		printf("DYN (Shared object file)\n");
		break;
	case 4:
		printf("CORE (Core file)\n");
		break;
	case 65280:
		printf("\n");
		break;
	case 65535:
		printf("\n");
		break;
	}
}


/**
 * _class - print type.
 * @x : type.
 * Return: void.
 */


void _class(int x)
{
	int nb;

	printf("  Class:");
	for (nb = 7; nb < 36; nb++)
		putchar(' ');

	switch (x)
	{
	case 0:
		printf("Invalid class\n");
	case 1:
		printf("ELF32\n");
		break;
	case 2:
		printf("ELF64\n");
		break;
	}
}


/**
 * _data - print type.
 * @x : type.
 * Return: void.
 */


void _data(int x)
{
	int nb;

	printf("  Data:");
	for (nb = 6; nb < 36; nb++)
		putchar(' ');

	switch (x)
	{
	case 0:
		printf("Invalid data encoding\n");
	case 1:
		printf("2's complement, little endian\n");
		break;
	case 2:
		printf("2's complement, big endian\n");
		break;
	}
}


/**
 * _version - print type.
 * @x : type.
 * Return: void.
 */


void _version(int x)
{
	int nb;

	printf("  Version:");
	for (nb = 9; nb < 36; nb++)
		putchar(' ');

	switch (x)
	{
	case 0:
		printf("Invalid version\n");
	case 1:
		printf("1 (current)\n");
		break;
	}
}

/**
 * _adr - the address of the enty point.
 * @header : type elf_file.
 * Return: void.
 */


void _adr(Elf64_Ehdr header)
{
	int nb;

	printf("  Entry point address:");
	for (nb = 21; nb < 36; nb++)
		putchar(' ');

	printf("0x%u\n", (unsigned int)header.e_entry);
}


/**
 * main - check the code for Holberton School students.
 * @ac : number of argements.
 * @av : list of argements.
 * Return: Always 0.
 */

int main(int ac, char **av)
{
	int fd, nb;
	Elf64_Ehdr header;

	if (ac != 2)
	{
		dprintf(STDERR_FILENO, "Usage: elf_filename\n");
		exit(97);
	}

	fd = open(av[1], O_RDONLY);

	nb = read(fd, &header, sizeof(Elf64_Ehdr));

	if (header.e_ident[0] != 0x7f && header.e_ident[1] != 'E' &&
	    header.e_ident[2] != 'L' && header.e_ident[3] != 'F')
	{
		dprintf(STDERR_FILENO, "This file is not a <ELF> file\n");
		exit(98);
	}

	printf("ELF Header:\n  Magic:");

	for (nb = 0; header.e_ident[nb]; nb++)
		printf(" %.2x", header.e_ident[nb]);
	putchar('\n');

	_class(header.e_ident[EI_CLASS]);
	_data(header.e_ident[EI_DATA]);
	_version(header.e_version);
	_type(header.e_type);
	_adr(header);


	nb = close(fd);
	return (0);
}
