#include "ft_printf.h"
#include <stdio.h>
# define arg "test%d///%s///%p", 367, "test", "lalalalalallalallalal"

int main()
{
	printf("[%d]\n", printf(arg));
	printf("[%d]\n", ft_printf(arg));
}