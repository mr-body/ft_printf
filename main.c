#include "ft_printf.h"
#include <stdio.h>

int main()
{
	int valor = printf("%u\n", -5);
	int valor2 = ft_printf("%u\n", -5);
	
	printf("%d-%d", valor, valor2);
}
