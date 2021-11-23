#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>
#include "../ft_tolower.c"

int main(int ac, char *av[])
{
	(void) ac;
	char c = *av[1]; 
	printf("tolower----->\t%c\n", tolower(c));
	printf("ft_tolower-->\t%c\n", ft_tolower(c));
}
