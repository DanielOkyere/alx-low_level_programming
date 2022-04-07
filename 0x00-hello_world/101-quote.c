#include <stdio.h>
#include <unistd.h>
#include <string.h>
/**
 * main - main block
 * Return: 1
 */
int main(void)
{
int t = strlen("and that piece of art is useful - Dora Korpar, 2015-10-19\n");
write(2, "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n", t);
return (1);
}
