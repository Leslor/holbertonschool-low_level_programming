#include <main.h>

/*function declaration*/
char _putchar(char c);

/**
  * main - print a space
  * Return : 0
  */

int main(void)
{
	char c[] = "_putchar";
	int i;

	for (i = 0; i < 9; i++)
	{
		_putchar(c[i]);
	}
	_putchar('\n');
return (0);
}
