/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yuske <yuske@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/24 16:18:24 by yfurutat          #+#    #+#             */
/*   Updated: 2022/11/19 02:54:34 by yuske            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// int	ft_strncmp(const char *str1, const char *str2, size_t n)
// {
// 	size_t	len1;
// 	size_t	len2;

// 	len1 = ft_strlen(str1);
// 	len2 = ft_strlen(str2);
// 	if (len1 == 0  || len2 == 0)
// 		return (0);
// 	if (len2 > len1)
// 		len2 = len1;
// 	if (n > len1)
// 		n = len1;
// 	while (str1[n] == str2[n] && n > 0)
// 	{
// 		if (n == 0)
// 			break ;
// 		n--;
// 	}
// 	return ((unsigned char)str1[n] - (unsigned char)str2[n]);
// }

//n==0->whileループに入らない
//str1,2==NULL->while->if
//文字配列が終端文字に当たるか、1と2で異なるところに当たったらループが止まる。
int	ft_strncmp(const char *str1, const char *str2, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n)
	{
		if (!str1[i] || !str2[i] || str1[i] != str2[i])
			return ((unsigned char)str1[i] - (unsigned char)str2[i]);
		i++;
	}
	return (0);
}
