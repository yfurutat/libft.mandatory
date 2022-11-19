/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yuske <yuske@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/24 16:19:01 by yfurutat          #+#    #+#             */
/*   Updated: 2022/11/18 17:07:19 by yuske            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

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

//s1, s2 == NULL -> ifに引っかからない. n == 0 -> whileに入らない
int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	const unsigned char	*s1b;
	const unsigned char	*s2b;
	size_t				i;

	s1b = (const unsigned char *)s1;
	s2b = (const unsigned char *)s2;
	i = 0;
	while (i < n)
	{
		if (s1b[i] != s2b[i])
			return (s1b[i] - s2b[i]);
		i++;
	}
	return (0);
}
