#ifndef _MAIN_H_
#define _MAIN_H_

#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>
#include <elf.h>
#include <stdio.h>

int _putchar(char c);
ssize_t read_textfile(const char *filename, size_t letters);
int create_file(const char *filename, char *text_content);
int append_text_to_file(const char *filename, char *text_content);

void chk_elf(unsigned char *e_id);
void prnt_magic(unsigned char *e_id);
void prnt_class(unsigned char *e_id);
void prnt_data(unsigned char *e_id);
void prnt_version(unsigned char *e_id);
void prnt_abi(unsigned char *e_id);
void prnt_osabi(unsigned char *e_id);
void prnt_type(unsigned int e_typ, unsigned char *e_id);
void prnt_entry(unsigned long int e_enty, unsigned char *e_id);
void close_elf(int elf);

int main(int __attribute__((__unused__)) ac, char *av[]);

#endif
