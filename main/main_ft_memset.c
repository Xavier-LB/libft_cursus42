#include <stdio.h>
#include "../ft_memset.c"
#include <string.h>

int main()
{
	char s[] = "Hello world!";
	ft_memset(s+4, '@', 4);
	printf("%s", s);
}	
