int ft_strncmp(char *s1, char *s2, int n)
{
	int	i;
	int cmp;

	i = 0;
	cmp = 0;
	while ((s1[i] != '\0' || s2[i] != '\0') && i< n)
	{
		if (s1[i] != s2[i])
		{
			cmp = s1[i] - s2[i];
			return (cmp);
		}
		i++;
	}	
	return (cmp);
}
