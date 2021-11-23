#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>
#include "../ft_isdigit.c"

int	main(int argc, char *argv[])
{
	(void)	argc;
	(void)	argv;
	printf("isdigit ----->\t%d\n", isdigit('r'));
	printf("ft_isdigit -->\t%d", ft_isdigit('r'));
}
