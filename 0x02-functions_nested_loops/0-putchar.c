#include"main.h"
#include <unistd.h>

/*
 *main-Entry point
 *_putchar - writes the character c to stdout
 *@c: The character to print
 *
 * Description:program that prints _putchar
 *
 *Return : Always 0 (Success)
 *Return: On success 1.
 *On error, -1 is returned, and errno is set appropriately.
*/

		int main(void)
		int _putchar(char c)
{
		char str[] = "_putchar";
		int ch;

		for (ch = 0; ch < 8; ++ch)
		_putchar(str[ch]);
		_putchar('\n');

		return (0);
		return (write(1, &c, 1));
}

