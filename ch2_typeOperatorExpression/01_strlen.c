#include <stdio.h>

int strlen (char []);

int main()
{
	char str[1000];

	printf("input a string:");
	scanf("%s", str);

	printf("your input is :%s\n", str);
	printf("It's length is :%d\n", strlen(str));

	return 0;
}


int strlen(char str[])
{
	int i;

	while(str[i] != '\0')
		++i;
	return i;
}

