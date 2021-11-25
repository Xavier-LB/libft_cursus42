#include <stdio.h>
#include <string.h>
#include "../ft_bzero.c"

int	main()
{
	char s[] = "hello World!";
	ft_bzero(s, sizeof(char) * 2);
	printf("%s", s+1);
}
