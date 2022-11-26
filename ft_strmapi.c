/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yuske <yuske@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/29 17:05:10 by yuske             #+#    #+#             */
/*   Updated: 2022/11/23 11:21:33 by yuske            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

//16L
char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	unsigned int	i;
	char			*nu_str;

	if (!s || !f)
		return (NULL);
	nu_str = (char *)malloc(sizeof(char) * (ft_strlen(s) + 1));
	if (!nu_str)
		return (NULL);
	i = 0;
	while (s[i])
	{
		nu_str[i] = f(i, s[i]);
		i++;
	}
	nu_str[i] = 0;
	return (nu_str);
}
