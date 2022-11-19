/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yuske <yuske@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/01 20:35:39 by yuske             #+#    #+#             */
/*   Updated: 2022/11/19 02:11:45 by yuske            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

//2nd arg is unsigned int. why? compatible with size_t.
//s->str, len->len_subの方がわかりやすい？
char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*sub;
	size_t	end_s;
	size_t	i;

	if (!s)
		return (NULL);
	end_s = ft_strlen(s);
	if (len > end_s)
		len = end_s;
	sub = (char *)malloc(sizeof(char) * (len + 1));
	if (!sub)
		return (NULL);
	i = 0;
	while (i < len && start < end_s)
		sub[i++] = (char)s[start++];
	sub[i] = '\0';
	return (sub);
}
