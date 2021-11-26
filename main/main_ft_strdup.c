#include <string.h>
#include <stdio.h>
#include "../ft_strdup.c"

int	main()
{
	const char s[] = "abc";
	char *dup;

	dup = ft_strdup(s);
	printf("%s", dup);

}
