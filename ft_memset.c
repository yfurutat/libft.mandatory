/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yuske <yuske@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/12 03:25:00 by yfurutat          #+#    #+#             */
/*   Updated: 2022/11/18 14:35:46 by yuske            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *str, int ch, size_t n)
{
	char	*str_caster;
	size_t	i;

	i = 0;
	str_caster = (char *)str;
	if (!n)
		return (str_caster);
	while (i < n)
	{
		str_caster[i] = ch;
		i++;
	}
	return (str_caster);
}
