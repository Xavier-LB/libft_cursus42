#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "../ft_strncmp.c"

int	main(int ac, char *av[])
{
	(void) ac;
	(void) av;
	char *s1 = "test\200";
	char *s2 = "test\0";
	int n = 6;
	printf("%d\n", strncmp(s1, s2, n));
	printf("%d", ft_strncmp(s1, s2, n));
}
