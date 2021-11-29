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
#include "../ft_strlcat.c"

int main()
{
    char dest[30];
    int r;

    memset(dest, 0, 30);
//    memset(dest, 'r', 6);
//    memset(dest, 'r', 15);

  //  dest[11] = 'a';


    r = ft_strlcat(dest, "123", 0);

    printf("Copied '' into '%s', length %d\n", dest, r);

//    return(0);
}
