#include<unistd.h>

/*
 * main - Entry point
 *
 * Description: print a quote using write function
 *
 * Return: This time we return an error 1.
 *
*/
int main(void)
{

	char qte[] = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";

	write(1, qte, 59);

	return (1);

}
