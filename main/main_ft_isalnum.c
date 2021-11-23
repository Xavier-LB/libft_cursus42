#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>
#include "../ft_isalnum.c"

int	main(int argc, char *argv[])
{
	(void)	argc;
	(void)	argv;
	printf("isalnum ----->\t%d\n", isalnum('%'));
	printf("ft_isalnum -->\t%d", ft_isalnum('%'));
}
