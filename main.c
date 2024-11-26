#include "ft_printf.h"
#include <stdio.h>
#include <limits.h>
# define test "%x", 3184814028

int main()
{
	// printf("[%d]\n", printf("%%%%%%%%%"));
	// printf("[%d]\n", ft_printf("%%%%%%%%%"));
	// printf("%p\n", NULL);
	// printf("%p\n", (void *)42);
	// printf("%p\n", (void *)ULONG_MAX);
	// printf("\n");
	// ft_printf("%p\n", NULL);
	// ft_printf("%p\n", (void *)42);
	// ft_printf("%p\n", (void *)ULONG_MAX);

	ft_printf("%x\n", 0);
	printf("%x\n", 0);
}