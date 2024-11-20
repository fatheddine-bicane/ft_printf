#include <stdio.h>

int main()
{
	char *str;
	unsigned long int i = (unsigned long int)(&str);
	printf("%ld", i);
}