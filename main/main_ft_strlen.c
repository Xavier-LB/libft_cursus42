#include <string.h>
#include <stdio.h>
#include "../ft_strlen.c"

int	main(int argc, char *argv[])
{
	(void)	argc;	
	printf("strlen -->\t%lu\n", strlen(argv[1]));
	printf("ft_strlen -->\t%d", ft_strlen(argv[1]));
	
}
