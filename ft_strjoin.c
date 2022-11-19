/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yuske <yuske@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/01 20:36:13 by yuske             #+#    #+#             */
/*   Updated: 2022/11/19 12:04:48 by yuske            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

//20L
char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*nu_str;
	size_t	i;
	size_t	j;

	if (!s1 || !s2)
		return (NULL);
	nu_str = (char *)malloc(sizeof(char) * (ft_strlen(s1) + ft_strlen(s2) + 1));
	if (!nu_str)
		return (NULL);
	i = 0;
	j = 0;
	while (s1[i])
	{
		nu_str[i] = s1[i];
		i++;
	}
	while (s2[j])
		nu_str[i++] = s2[j++];
	nu_str[i] = 0;
	return (nu_str);
}
