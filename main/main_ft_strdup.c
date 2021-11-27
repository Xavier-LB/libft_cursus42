#include <string.h>
#include <stdio.h>
#include "../ft_strdup.c"

int	main()
{
	const char s[] = "lorem ipsum dolor sit amet";
	char *dup;

	dup = ft_strdup(s);
	printf("%s", dup);

}
