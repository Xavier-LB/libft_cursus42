#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include "../ft_atoi.c"

int main(int ac, char *av[])
{
	(void)ac;
	printf("atoi----->\t%d\n", atoi(av[1]));
	printf("ft_atoi----->\t%d\n", ft_atoi(av[1]));
}
