#include <stdio.h>

int main()
{
	int ch;

	ch = getchar();
	while(ch != EOF)
	{
		putchar(ch);
		ch = getchar();
	}

	return 0;
}
