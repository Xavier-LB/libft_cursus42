#include "../ft_split.c"
#include <stdio.h>

int		main(void)
{
	int i = 0;
	char **tab;
		
	tab = ft_split("11g1", '1');
	while (i < 1)
	{
		printf("%s\n", tab[i]);
		i++;
	}


/*
	char *s = "123-----123456-123456789---";
	printf("%d", count_chars(s, '-'));
	return (0);
	*/
}
