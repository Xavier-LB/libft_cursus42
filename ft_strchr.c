char *ft_strchr(char *str, int c)
{
	int i;

	i = 0;
	while (str[i] != c && str[i] != '\0')
		i++;
	if (str[i] == c)
		return (&str[i]);
	return (NULL);
}