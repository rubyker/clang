#include <stdio.h>

/* copies its input to its output one character at a time */
/* using function: getchar() and putchar() */
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
