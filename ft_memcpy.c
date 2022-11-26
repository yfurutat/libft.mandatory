/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yuske <yuske@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/12 03:17:03 by yfurutat          #+#    #+#             */
/*   Updated: 2022/11/23 10:57:25 by yuske            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

//16L
void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	size_t				i;
	unsigned char		*dst_bin;
	const unsigned char	*src_bin;

	if (!dst && !src)
		return (NULL);
	dst_bin = (unsigned char *)dst;
	src_bin = (const unsigned char *)src;
	i = 0;
	while (i < n)
	{
		dst_bin[i] = src_bin[i];
		i++;
	}
	return (dst_bin);
}
