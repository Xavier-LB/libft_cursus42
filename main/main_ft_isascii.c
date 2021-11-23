#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>
#include "../ft_isascii.c"

int	main(int argc, char *argv[])
{
	(void)	argc;
	(void)	argv;
	printf("isascii ----->\t%d\n", isascii(128));
	printf("ft_isascii -->\t%d", ft_isascii(128));
}
