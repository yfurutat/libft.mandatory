/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yuske <yuske@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/24 16:18:55 by yfurutat          #+#    #+#             */
/*   Updated: 2022/11/18 15:53:54 by yuske            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

//castをreturnでしなくて済むように、constを外しました。
// void	*ft_memchr(const void *str, int ch, size_t n)
// {
// 	unsigned char	*str_caster;
// 	unsigned char	chr;
// 	size_t			i;

// 	str_caster = (unsigned char *)str;
// 	chr = (unsigned char)ch;
// 	i = 0;
// 	while (i++ < n)
// 	{
// 		if (*str_caster == chr)
// 			return (str_caster);
// 		str_caster++;
// 	}
// 	return (NULL);
// }

void	*ft_memchr(const void *str, int ch, size_t n)
{
	unsigned char	*str_caster;
	size_t			i;

	str_caster = (unsigned char *)str;
	i = 0;
	while (i++ < n)
	{
		if (*str_caster == (unsigned char)ch)
			return (str_caster);
		str_caster++;
	}
	return (NULL);
}
