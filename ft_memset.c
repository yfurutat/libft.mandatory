/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yuske <yuske@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/12 03:25:00 by yfurutat          #+#    #+#             */
/*   Updated: 2022/11/23 11:09:11 by yuske            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

//13L fewest casts
// void	*ft_memset(void *str, int ch, size_t n)
// {
// 	char	*str_caster;
// 	size_t	i;

// 	i = 0;
// 	str_caster = (char *)str;
// 	if (!n)
// 		return (str_caster);
// 	while (i < n)
// 	{
// 		str_caster[i] = ch;
// 		i++;
// 	}
// 	return (str_caster);
// }

//13L
void	*ft_memset(void *str, int ch, size_t n)
{
	unsigned char	*str_caster;
	size_t			i;

	i = 0;
	str_caster = (unsigned char *)str;
	if (!n)
		return (str_caster);
	while (i < n)
	{
		str_caster[i] = (unsigned char)ch;
		i++;
	}
	return (str_caster);
}
