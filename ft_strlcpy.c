/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yuske <yuske@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/12 03:12:02 by yfurutat          #+#    #+#             */
/*   Updated: 2022/11/19 10:40:25 by yuske            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

//1. 9L
//whileループでsrcのlenに変化が生じるので、
//while前にlen_src変数を用意して値を固定。
//len_cpy < len_src時の本家仕様を再度チェック
size_t	ft_strlcpy(char *dst, const char *src, size_t len_cpy)
{
	size_t	len_src;

	len_src = ft_strlen(src);
	if (len_cpy == 0)
		return (len_src);
	while (*src && len_cpy-- > 1)
		*dst++ = *src++;
	*dst = '\0';
	return (len_src);
}

//2. 15L
// size_t	ft_strlcpy(char *dst, const char *src, size_t len_cpy)
// {
// 	size_t	i;
// 	size_t	len_src;

// 	i = 0;
// 	len_src = ft_strlen(src);
// 	if (len_cpy == 0)
// 		return (len_src);
// 	while (src[i] && len_cpy > 1)
// 	{
// 		dst[i] = src[i];
// 		i++;
// 		len_cpy--;
// 	}
// 	dst[i] = '\0';
// 	return (len_src);
// }
