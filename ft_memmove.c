/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yuske <yuske@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/12 03:24:47 by yfurutat          #+#    #+#             */
/*   Updated: 2022/11/23 11:06:33 by yuske            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// void	*ft_memmove(void *dest, const void *src, size_t n)
// {
// 	unsigned char		*d_chr;
// 	const unsigned char	*s_chr;
// 	size_t				i;

// 	if (!dest && !src)
// 		return (NULL);
// 	d_chr = (unsigned char *)dest;
// 	s_chr = (const unsigned char *)src;
// 	i = 0;
// 	if (d_chr <= s_chr)
// 	{
// 		while (i < n)
// 		{
// 			d_chr[i] = s_chr[i];
// 			i++;
// 		}
// 	}
// 	else
// 	{
// 		while (i < n--)
// 			d_chr[n] = s_chr[n];
// 	}
// 	return (d_chr);
// }

//17L
void	*ft_memmove(void *dst, const void *src, size_t n)
{
	size_t				i;
	unsigned char		*dst_bin;
	const unsigned char	*src_bin;

	if (!dst && !src)
		return (NULL);
	dst_bin = (unsigned char *)dst;
	src_bin = (const unsigned char *)src;
	i = 0;
	if (dst > src)
	{
		while (i < n--)
			dst_bin[n] = src_bin[n];
	}
	else
		ft_memcpy(dst, src, n);
	return (dst_bin);
}
