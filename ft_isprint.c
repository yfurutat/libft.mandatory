/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yuske <yuske@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/12 03:16:40 by yfurutat          #+#    #+#             */
/*   Updated: 2022/11/18 15:49:34 by yuske            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

//1
// int	ft_isprint(int ch)
// {
// 	if (ch >= 0x20 && ch <= 0x7e)
// 		return (1);
// 	else
// 		return (0);
// }

//2
// int	ft_isprint(int ch)
// {
// 	return (ch >= 0x20 && ch <= 0x7E);
// }

//3
// int	ft_isprint(int ch)
// {
// 	return (ch >= 32 && ch <= 126);
// }

//4
int	ft_isprint(int ch)
{
	return (ch >= ' ' && ch <= '~');
}
