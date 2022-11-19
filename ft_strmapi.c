/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yuske <yuske@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/29 17:05:10 by yuske             #+#    #+#             */
/*   Updated: 2022/11/08 11:51:20 by yuske            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	unsigned int	i;
	char			*nus;

	if (!s || !f)
		return (NULL);
	nus = (char *)malloc(sizeof(char) * (ft_strlen(s) + 1));
	if (!nus)
		return (NULL);
	i = 0;
	while (s[i])
	{
		nus[i] = f(i, s[i]);
		i++;
	}
	nus[i] = 0;
	return (nus);
}
