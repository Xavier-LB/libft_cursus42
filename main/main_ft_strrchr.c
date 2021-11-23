#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "../ft_strrchr.c"

int main(int ac, char *av[])
{
	(void) ac;
	char *str = av[1];
	char c = *av[2];
	printf("%s\n", strrchr(str, c));
	printf("%s", ft_strrchr(str, c));
}
