#include "../ft_memcmp.c"
#include <string.h>
#include <stdio.h>

int	main()
{
	int	a;

	a = memcmp("test", "test", 5);
	printf("%d", a);
}
