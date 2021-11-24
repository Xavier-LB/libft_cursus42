/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xle-baux <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/24 12:30:34 by xle-baux          #+#    #+#             */
/*   Updated: 2021/11/24 15:31:11 by xle-baux         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void *ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t			i;
	unsigned char		*dst;
	unsigned const char	*sr;

	i = 0;
	sr = src;
	dst = dest;
	while (i++ < n)
	{
		*dst++ = *sr++;
	}
	return (dest);
}
