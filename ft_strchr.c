/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xle-baux <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/25 15:26:51 by xle-baux          #+#    #+#             */
/*   Updated: 2021/11/29 17:36:14 by xle-baux         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(char *str, int c)
{
	unsigned int	i;

	i = 0;
	while (str[i] != (unsigned char)c && str[i] != '\0')
		i++;
	if (str[i] == (unsigned char)c)
		return (&str[i]);
	return (NULL);
}
