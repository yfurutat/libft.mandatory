/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yuske <yuske@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/24 16:19:14 by yfurutat          #+#    #+#             */
/*   Updated: 2022/11/19 03:41:01 by yuske            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// char	*ft_strchr(const char *str, int ch)
// {
// 	char	*re;

// 	re = NULL;
// 	while (*str)
// 	{
// 		if (*str == (char)ch)
// 		{
// 			re = (char *)str;
// 			break ;
// 		}
// 		str++;
// 	}
// 	if ((char)ch == '\0')
// 		return ((char *)str);
// 	return (re);
// }

//9L
char	*ft_strchr(const char *str, int ch)
{
	while (*str)
	{
		if (*str == (char)ch)
			return ((char *)str);
		str++;
	}
	if ((char)ch == '\0')
		return ((char *)str);
	return (NULL);
}
