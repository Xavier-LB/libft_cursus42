/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xle-baux <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/28 11:43:14 by xle-baux          #+#    #+#             */
/*   Updated: 2021/11/28 18:59:04 by xle-baux         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	is_c(char s, char c)
{
	if (s == c)
		return (1);
	return (0);
}

int	count_lines(char const *s, char c)
{
	int	i;
	int	lines;

	i = 0;
	lines = 0;
	while (s[i] != '\0')
	{
		if (is_c(s[i], c) == 0 &&
			(is_c(s[i + 1], c) == 1 || s[i + 1] == '\0'))
			lines++;
		i++;
	}
	return (lines);
}

int	count_chars(char const *s, char c)
{
	int	i;
	int	chars;

	i = 0;
	chars = 0;
	while (s[i] != '\0' && s[i] != c)
	{
		i++;
		chars++;
	}
	return (chars);
}

char	**ft_split(char const *s, char c)
{
	char	**split;
	int	i;
	int	y;
	int	x;

	split = (char **)malloc(sizeof(char *) * (count_lines(s, c) + 1));
	if (split == 0)
		return (NULL);
	i = 0;
	y = 0;
	while (s[i] != '\0')
	{
		while (s[i] == c)
			i++;
		x = 0;
		split[y] = (char *)malloc(sizeof(char) * (count_chars(&s[i], c) + 1));
		if (split[y] == 0)
			return (NULL);
		while (s[i] != c && s[i] != '\0')
		{
			split[y][x++] = s[i++];
		}
		split[y++][x] = '\0';
		i++;
	}
	split[y][x] = NULL;
	return (split);
}



/*
int	is_charset(char str, char charset)
{
	if (charset == str)
		return (1);
	if (str == 0)
		return (1);
	return (0);
}

int	line_count(const char *str, char charset)
{
	int	line;
	int	i;

	line = 0;
	i = 0;
	while (str[i] != '\0')
	{
		if (is_charset(str[i], charset) == 0
			&& is_charset(str[i + 1], charset) == 1)
			line++;
		i++;
	}
	return (line);
}

int	line_len(const char *str, char charset)
{
	int	i;

	i = 0;
	while (is_charset(str[i], charset) == 0)
		i++;
	return (i);
}

char	**write_line(const char **split_x, const char *str, char charset)
{
	int	i_line;
	int	i_str;
	int	char_in_line;

	i_str = 0;
	i_line = 0;
	while (str[i_str] != '\0')
	{
		if (is_charset(str[i_str], charset) == 1)
			i_str++;
		else
		{
			split_x[i_line] = (char *)malloc(sizeof(char)
					* (line_len(&str[i_str], charset) + 1));
			char_in_line = 0;
			while (is_charset(str[i_str], charset) == 0)
			{
				split_x[i_line][char_in_line++] = str[i_str];
				i_str++;
			}
			split_x[i_line][char_in_line] = '\0';
			i_line++;
		}
	}
	return (split_x);
}

char	**ft_split(char const *s, char c)
{
	int		nlines;
	char	**split;

	nlines = line_count(s, c);
	split = (char **)malloc(sizeof(char *) * (nlines + 1));
	split[nlines] = 0;
	split = write_line(split, s, c);
	return (split);
}



*/

/*
int	len_split(char const *s, char c)
{
	int	i;
	int	len;

	i = 0;
	len = 1;
	while (s[i] != '\0')
	{
		if (s[i] == c)
			len++;
		i++;
	}
	if (s[i - 1] == c)
		return (len - 1);
	return (len);
}

int	len_str(char const *s, char c)
{
	int	i;
	int	len;

	i = 0;
	len = 1;
	while (s[i] != '\0' && s[i] != c)
	{
		i++;
		len++;
	}
	return (len);
}


char	**ft_split(char const *s, char c)
{
	int		i_s;
	int		i_split;
	int		j_split;
	char	**split;

	i_s = 0;
	i_split = 0;

	split = malloc(sizeof(char const) * len_split(s, c) + 1);
	if (split == NULL)
		return (NULL);

	while (s[i_s] != '\0')
	{

		j_split = 0;

		split[i_split] = malloc(sizeof(char const) * len_str(&s[i_s], c) + 1);
		if (split[i_split] == NULL)
			return (NULL);

		while (s[i_s] != c && s[i_s] != '\0')
		{
			split[i_split][j_split++] = s[i_s];
			i_s++;
		}

		split[i_split][j_split] = '\0';

		i_split++;
		i_s++;
	}
	split[i_split] = NULL;
	return (split);
}
*/
