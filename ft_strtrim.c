/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yuske <yuske@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/01 20:35:51 by yuske             #+#    #+#             */
/*   Updated: 2022/11/26 17:12:14 by yuske            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

	// while ((s1[i] >= '\t' && s1[i] <= '\r') || s1[i] == ' ')
	// 	i++;
	// while ((s1[end] >= 9 && s1[end] <= 13) || s1[end] == 32)
	// 	end--;
//14L
char	*ft_strtrim(char const *s1, char const *set)
{
	char	*trimmed;
	size_t	head;
	size_t	tail;

	if (!s1 || !set)
		return (NULL);
	head = 0;
	tail = ft_strlen(s1) - 1;
	while (ft_strchr(set, s1[head]))
		head++;
	while (ft_strchr(set, s1[tail]))
		tail--;
	trimmed = ft_substr(s1, head, tail - head + 1);
	return (trimmed);
}

//14L
// char	*ft_strtrim(char const *s1, char const *set)
// {
// 	char	*trimmed;
// 	size_t	head;
// 	size_t	tail;

// 	if (!s1 || !set)
// 		return (NULL);
// 	head = 0;
// 	tail = ft_strlen(s1) - 1;
// 	while (ft_strrchr(set, s1[head]))
// 		head++;
// 	while (ft_strrchr(set, s1[tail]))
// 		tail--;
// 	trimmed = ft_substr(s1, head, tail - head + 1);
// 	return (trimmed);
// }
