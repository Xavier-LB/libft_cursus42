/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xle-baux <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/24 12:30:34 by xle-baux          #+#    #+#             */
/*   Updated: 2021/11/25 16:20:00 by xle-baux         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t	i;

	i = 0;
	if (!dest && !src)
		return (NULL);
	while (i < n)
	{
		*((unsigned char *)dest + i) = *((unsigned char *)src + i);
		i++;
	}
	return (dest);
}

/*
void    *ft_memcpy(void *dst, const void *src, size_t size)
{
    size_t    i;

    if (!src || !dst)
        return (NULL);
    i = 0;
    while (i < size)
    {
        ((unsigned char *)dst)[i] = ((unsigned char *)src)[i];
    	i++;
	}
    return (dst);
}*/
