/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xle-baux <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/27 11:28:24 by xle-baux          #+#    #+#             */
/*   Updated: 2021/11/29 18:08:01 by xle-baux         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	unsigned int	i;
	char			*sub;

	if (s == NULL || start > len)
	{
		sub = malloc(sizeof(char) * len + 1);
		if (sub == 0)
			return (NULL);
		sub[0] = '\0';
		return (sub);
	}
	i = 0;
	sub = malloc(sizeof(char) * len + 1);
	if (sub == 0 || start == 0)
		return (NULL);
	while (i < len)
	{
		sub[i] = s[i + start];
		i++;
	}
	sub[i] = '\0';
	return (sub);
}
