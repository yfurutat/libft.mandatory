/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yuske <yuske@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/24 16:57:13 by yfurutat          #+#    #+#             */
/*   Updated: 2022/11/19 03:42:09 by yuske            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

//16L
char	*ft_strdup(const char *str)
{
	char	*dup;
	size_t	end;
	size_t	i;

	i = 0;
	end = ft_strlen(str);
	dup = (char *)malloc(end + 1);
	if (!dup)
		return (NULL);
	while (end > i)
	{
		dup[i] = str[i];
		i++;
	}
	dup[i] = '\0';
	return (dup);
}
