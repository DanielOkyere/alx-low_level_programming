#ifndef _MAIN_H_
#define _MAIN_H_


void *mul_array(char *a1, int len1, char a2, char *a3, int lena);
void print_array(char *a, int nb);
int _atoi_digit(char x);
int _isNumber(char *argv);
char *mul(char n, char *num, int num_index, char *dest, int dest_index);
int check_for_digits(char **av);
void init(char *str, int l);
void _print(char *str, int l);
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size);
int *array_range(int min, int max);
void *_calloc(unsigned int nmemb, unsigned int size);
char *string_nconcat(char *s1, char *s2, unsigned int n);
int _strlen(char *s);
void *malloc_checked(unsigned int b);
int _putchar(char c);
#endif
