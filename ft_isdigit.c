/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yuske <yuske@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/12 03:16:04 by yfurutat          #+#    #+#             */
/*   Updated: 2022/11/18 15:49:04 by yuske            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

//1
// int	ft_isdigit(int ch)
// {
// 	if (ch >= '0' && ch <= '9')
// 		return (1);
// 	else
// 		return (0);
// }

//2 hexadicimal
// int	ft_isdigit(int ch)
// {
// 	return (ch >= 0x30 && ch <= 0x39);
// }

//3 magic nbr
// int	ft_isdigit(int ch)
// {
// 	return (ch >= 48 && ch <= 57);
// }

//4 character literal
int	ft_isdigit(int ch)
{
	return (ch >= '0' && ch <= '9');
}
