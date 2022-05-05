#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - check the code for ALX School students.
 *
 * Return: Always 0.
 */
int main(void)
{
    char *s;
    char *a;
    s = str_concat("Betty ", "Holberton");
    a = str_concat("","Holberton");
    if (s == NULL)
    {
        printf("failed\n");
        return (1);
    }
    printf("%s\n", s);
    printf("%s\n",a);
    free(a);
    free(s);
    return (0);
}
