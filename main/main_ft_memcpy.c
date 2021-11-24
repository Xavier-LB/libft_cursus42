#include <stdio.h>
#include <string.h>
#include "../ft_memcpy.c"

int main()
{
	int num[1];
	int dst[15];
 
	//printf("%i", dst[0]);
	ft_memcpy(dst, num, sizeof(int));
	printf("%d", dst[0]);

	//printf("%p", memcpy(dest, src, sizeof(src)));
}
