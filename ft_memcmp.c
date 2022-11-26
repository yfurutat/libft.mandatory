/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yuske <yuske@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/24 16:19:01 by yfurutat          #+#    #+#             */
/*   Updated: 2022/11/23 10:56:58 by yuske            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

//strncmpと違い、'\0'でもストップしない。
// int	ft_memcmp(const void *s1, const void *s2, size_t n)
// {
// 	const unsigned char	*s1b;
// 	const unsigned char	*s2b;
// 	size_t				i;

// 	if (!s1 || !s2 || n == 0)
// 		return (0);
// 	s1b = (const unsigned char *)s1;
// 	s2b = (const unsigned char *)s2;
// 	i = 0;
// 	while (i < n - 1 && s1b[i] == s2b[i])
// 		i++;
// 	return (s1b[i] - s2b[i]);
// }

//14L
//s1, s2 == NULL -> ifに引っかからない. n == 0 -> whileに入らない
int	ft_memcmp(const void *mem1, const void *mem2, size_t n)
{
	const unsigned char	*str1_caster;
	const unsigned char	*str2_caster;
	size_t				i;

	str1_caster = (const unsigned char *)mem1;
	str2_caster = (const unsigned char *)mem2;
	i = 0;
	while (i < n)
	{
		if (str1_caster[i] != str2_caster[i])
			return (str1_caster[i] - str2_caster[i]);
		i++;
	}
	return (0);
}
