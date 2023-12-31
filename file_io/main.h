#ifndef MAIN_H
#define MAIN_H

/*
 * File: main.h
 * AUth: Maria Alejandra Gonzalez
 * Desc: Header file containing prototypes for all functions
 *       written in the file descriptors C - File I/O directory.
 */
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>

ssize_t read_textfile(const char *filename, size_t letters);
int create_file(const char *filename, char *text_content);
int append_text_to_file(const char *filename, char *text_content);

#endif
