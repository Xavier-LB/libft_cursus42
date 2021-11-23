#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>
#include "../ft_isprint.c"

int	main(int argc, char *argv[])
{
	(void)	argc;
	(void)	argv;
	printf("isprint ----->\t%d\n", isprint('&'));
	printf("ft_isprint -->\t%d", ft_isprint('&'));
}
