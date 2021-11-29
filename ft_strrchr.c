/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xle-baux <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/25 15:35:23 by xle-baux          #+#    #+#             */
/*   Updated: 2021/11/29 17:38:46 by xle-baux         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(char *str, int c)
{
	int	i;

	i = ft_strlen(str);
	while (str[i] != (unsigned char)c && i != 0)
		i--;
	if (str[i] == (unsigned char)c)
		return (&str[i]);
	return (NULL);
}
