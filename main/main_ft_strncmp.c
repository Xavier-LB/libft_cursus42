#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "../ft_strncmp.c"

int	main(int ac, char *av[])
{
	(void) ac;
	(void) av;
	char *s1 = "ab";
	char *s2 = "";
	int n = 3;
	printf("%d\n", strncmp(s1, s2, n));
	printf("%d", ft_strncmp(s1, s2, n));
}
