/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yuske <yuske@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/12 03:15:45 by yfurutat          #+#    #+#             */
/*   Updated: 2022/11/18 15:45:36 by yuske            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// int	main()
// {
// 	printf("%c\n", ft_isalpha('a'));
// 	printf("%c\n", ft_isalpha('1'));
// 	printf("%c\n", ft_isalpha('Z'));
// 	printf("%c\n", ft_isalpha('='));
// 	return (0);
// }

//1
// int	ft_isalpha(int ch)
// {
// 	if ((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z'))
// 		return (1);
// 	else
// 		return (0);
// }

//2 magic nbr
// int	ft_isalpha(int ch)
// {
// 	return ((ch >= 65 && ch <= 90) || (ch >= 97 && ch <= 122));
// }

//3 hexadicimal
// int	ft_isalpha(int ch)
// {
// 	return ((ch >= 0x41 && ch <= 0x5a) || (ch >= 0x61 && ch <= 0x7a));
// }

//4 most readable?
// int	ft_isupper(int ch)
// {
// 	return (ch >= 'A' && ch <= 'Z');
// }

// int	ft_islower(int ch)
// {
// 	return (ch >= 'a' && ch <= 'z');
// }

// int	ft_isalpha(int ch)
// {
// 	return (ft_isupper(ch) || ft_islower(ch));
// }

//5 simplest + fastest?
int	ft_isalpha(int ch)
{
	return ((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z'));
}
