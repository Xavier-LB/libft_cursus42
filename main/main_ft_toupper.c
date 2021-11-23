#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>
#include "../ft_toupper.c"

int main(int ac, char *av[])
{
	(void) ac;
	char c = *av[1]; 
	printf("toupper----->\t%c\n", toupper(c));
	printf("ft_toupper-->\t%c\n", ft_toupper(c));
}
