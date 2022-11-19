/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yuske <yuske@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/12 03:15:22 by yfurutat          #+#    #+#             */
/*   Updated: 2022/11/19 03:26:24 by yuske            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

//1. 11L
// void	ft_bzero(void *str, size_t n)
// {
// 	unsigned int	i;
// 	char			*str_caster;

// 	i = 0;
// 	str_caster = (char *)str;
// 	while (i < n)
// 	{
// 		str_caster[i] = 0;
// 		i++;
// 	}
// }

//2. 7L
// void	ft_bzero(void *str, size_t n)
// {
// 	size_t	i;
// 	char	*str_caster;

// 	i = 0;
// 	str_caster = (char *)str;
// 	while (i < n)
// 		str_caster[i++] = 0;
// }

//3
void	ft_bzero(void *str, size_t n)
{
	ft_memset(str, 0, n);
}
