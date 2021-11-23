int	ft_isalnum(int	i)
{
	if ((i >= 65 && i <= 90) || (i >= 97 && i <= 122) || (i >= 48 && i <= 57))
		return (1);
	else 
		return (0);
}
