#include <stdio.h>
#include <string.h>
#include "../ft_memchr.c"

int main()
{
	char s[] = "bonjour";
	char *p = ft_memchr(s, 'o', 4);
	printf("%s", p);
}
