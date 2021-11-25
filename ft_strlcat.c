/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xle-baux <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/25 15:27:33 by xle-baux          #+#    #+#             */
/*   Updated: 2021/11/25 16:24:30 by xle-baux         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	len_src;
	size_t	len_dst;
	size_t	i_dst;
	size_t	i_src;

	len_src = ft_strlen(src);
	len_dst = ft_strlen(dst);
	i_dst = 0;
	i_src = 0;
	if (dstsize == 0)
	{
		return (dstsize);
	}
	while (dst[i_dst] != '\0' && i_dst < (dstsize - 1))
	{
		i_dst++;
	}
	while (src[i_src] != '\0' && i_dst < (dstsize - 1))
	{
		dst[i_dst] = src[i_src];
		i_dst++;
		i_src++;
	}
	dst[i_dst] = '\0';
	return (len_dst + len_src);
}
