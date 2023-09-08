#ifndef MAIN_H
#define MAIN_H
#include <stddef.h>
#include <unistd.h>
#include <fcntl.h>
#include <sys/types.h>
#include <sys/stat.h>

ssize_t read_textfile(const char *, size_t);
int create_file(const char *, char *);

#endif