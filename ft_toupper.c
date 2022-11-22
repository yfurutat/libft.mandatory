/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yuske <yuske@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/24 15:44:04 by yfurutat          #+#    #+#             */
/*   Updated: 2022/11/20 01:03:56 by yuske            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// int	main(void)
// {
// 	printf("%c\n", ft_toupper('s'));
// 	return (0);
// }

//1
// int	ft_toupper(int i)
// {
// 	if (i >= 97 && i <= 122)
// 		i = i - 32;
// 	return (i);
// }

//2
// int	ft_toupper(int i)
// {
// 	if (i >= 'a' && i <= 'z')
// 		i -= ' ';
// 	return (i);
// }

//3
//static int	ft_islower(int c)
// {
// 	return (c >= 'a' && c <= 'z');
// }

// int	ft_toupper(int i)
// {
// 	if (ft_islower(i))
// 		i -= ('a' - 'A');
// 	return (i);
// }

//4
int	ft_toupper(int i)
{
	if (i >= 'a' && i <= 'z')
		i += ('A' - 'a');
	return (i);
}

//5
// int	ft_toupper(int i)
// {
// 	if (i >= 'a' && i <= 'z')
// 		i -= ('a' - 'A');
// 	return (i);
// }
