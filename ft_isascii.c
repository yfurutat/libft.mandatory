/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yuske <yuske@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/12 03:15:53 by yfurutat          #+#    #+#             */
/*   Updated: 2022/11/17 11:01:48 by yuske            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

//1
// int	ft_isascii(int ch)
// {
// 	if (ch >= 0 && ch <= 127)
// 		return (1);
// 	else
// 		return (0);
// }

//2 null char + magic nbr
// int	ft_isascii(int ch)
// {
// 	return (ch >= '\0' && ch <= 127);
// }

//3 hexadicimal
// int	ft_isascii(int ch)
// {
// 	return (ch >= 0x00 && ch <= 0x7f);
// }

//4
int	ft_isascii(int ch)
{
	return (ch >= 0 && ch <= 127);
}
