#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>

char *_strcat(char *dest, char *src);
char *_strncat(char *dest, char *src, int n);
char *_strncpy(char *dest, char *src, int n);
int _strcmp(char *s1, char *s2);
void reverse_array(int *a, int n);
char *string_toupper(char *);
char *cap_string(char *);
/*int is_separator(char c);*/
char *leet(char *);
int _putchar(char c);
void print_number(int n);


#endif /* MAIN_H */
