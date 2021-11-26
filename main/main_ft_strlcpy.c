/*
#include <stdio.h>
#include <string.h>

int	main(int ac, char *av[])
{
	(void) ac;
	(void) av;
	printf("%d", strlcat("er", "dfdegh", 4));
}

*/

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "../ft_strlcpy.c"

int main()
{
    char string[] = "Hello world!";
    char buffer[19];
    size_t size = 0;
    int r;
    memset(buffer, 0, 15);
    memset(buffer, 'r', 6);

    r = ft_strlcpy(buffer,string,size);

    printf("Copied '%s' into '%s', length %d\n", string, buffer, r);

	return(0);
}
