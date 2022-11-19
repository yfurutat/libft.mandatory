/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yuske <yuske@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/12 03:15:36 by yfurutat          #+#    #+#             */
/*   Updated: 2022/11/19 03:27:34 by yuske            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

//1. 6L
// int	ft_isalnum(int ch)
// {
// 	if (ch >= '0' && ch <= '9')
// 		return (1);
// 	if ((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z'))
// 		return (1);
// 	else
// 		return (0);
// }

//2
// int	ft_isalnum(int ch)
// {
// 	return ((ch >= '0' && ch <= '9')
// 		|| (ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z'));
// }

//3
int	ft_isalnum(int ch)
{
	return (ft_isdigit(ch) || ft_isalpha(ch));
}
