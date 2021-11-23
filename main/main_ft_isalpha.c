#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>
#include "../ft_isalpha.c"

int	main(int argc, char *argv[])
{
	(void)	argc;
	(void)	argv;
	printf("isalpha ----->\t%d\n", isalpha('&'));
	printf("ft_isalpha -->\t%d", ft_isalpha('&'));
}
