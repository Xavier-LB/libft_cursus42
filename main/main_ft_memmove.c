
#include <string.h>
#include <stdio.h>
#include "../ft_memmove.c"
/*


int main( void )
{
	char str1[] = "0123456789";
    	printf( "The string: %s\n", str1 );
    	ft_memcpy(str1, str1 + 2, 2);
    	printf( "New string: %s\n", str1 );
}
*/
int main(void)
{
//	char src[50] = NULL;
//	char dest[50] = NULL;
	char *ret;

	ret = ft_memmove(NULL, NULL, 9);
	printf("%s", ret);
	return (0);
}
