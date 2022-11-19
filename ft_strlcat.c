/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yuske <yuske@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/12 03:12:26 by yfurutat          #+#    #+#             */
/*   Updated: 2022/11/19 11:57:38 by yuske            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size_dst)
{
	size_t	len_dst;
	size_t	i;

	if (size_dst == 0 && !dst && src)
		return (ft_strlen(src));
	len_dst = ft_strlen(dst);
	i = 0;
	while (src[i] && (len_dst + i + 1) < size_dst)
	{
		dst[len_dst + i] = src[i];
		i++;
	}
	if (len_dst > size_dst)
		len_dst = size_dst;
	else if (len_dst < size_dst)
		dst[len_dst + i] = '\0';
	return (len_dst + ft_strlen(src));
}
