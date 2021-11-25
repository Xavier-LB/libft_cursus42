#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	j;

	i = 0;
	while (haystack[i] != '\0' || i < len)
	{
		j = 0;
		while (haystack[i] == needle[j] || needle[j] == '\0')
		{
			if (needle[j] == '\0')
				return ((char *)&haystack[i - j]);
		i++;
		j++;
		}
	}
	return (NULL);
}
