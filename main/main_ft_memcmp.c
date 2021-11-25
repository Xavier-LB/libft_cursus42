#include "../ft_memcmp.c"
#include <string.h>
#include <stdio.h>

int	main()
{
	int	a;

	a = memcmp("abc", "acb", sizeof(int) * 3);
	printf("%d", a);
}
