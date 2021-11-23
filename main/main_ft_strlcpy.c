
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

void test(int size)
{
    char string[] = "Hhello world!";
    char buffer[19];
    int r;

    r = strlcpy(buffer,string,size);

    printf("Copied '%s' into '%s', length %d\n", string, buffer, r);
}

int main(int ac, char *av[])
{
	(void)	ac;
    test(atoi(av[1]));

    return(0);
}
