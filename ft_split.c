/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xle-baux <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/28 11:43:14 by xle-baux          #+#    #+#             */
/*   Updated: 2021/11/29 09:24:58 by xle-baux         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	is_c(char const s, char c)
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
		if (is_c(s[i], c) == 0
			&& (is_c(s[i + 1], c) == 1 || s[i + 1] == '\0'))
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
	size_t	i;
	size_t	y;
	size_t	x;

	split = (char **)malloc(sizeof(char *) * (count_lines(s, c) + 1));
	if (split == 0)
		return (0);
	i = 0;
	y = 0;
	while (i < ft_strlen(s))
	{
		while (s[i] == c)
			i++;
		x = 0;
		split[y] = malloc(sizeof(char) * (count_chars(&s[i], c) + 1));
		if (split[y] == 0)
			return (0);
		while (s[i] != c && s[i] != '\0')
			split[y][x++] = s[i++];
		split[y++][x] = '\0';
		i++;
	}
	split[count_lines(s, c)] = 0;
	return (split);
}
