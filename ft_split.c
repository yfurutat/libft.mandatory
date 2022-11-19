/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yuske <yuske@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/01 20:36:34 by yuske             #+#    #+#             */
/*   Updated: 2022/11/19 03:40:14 by yuske            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

//11L
static char	**free_all(char **words, size_t i)
{
	if (!words[i])
	{
		while (i > 0)
		{
			free(words[i]);
			i--;
		}
		free(words);
		words = NULL;
	}
	return (words);
}

//8L
//start->str=char*, end-start->len=size_t...automatically processed?
static char	*ft_strndup(const char *str, size_t n)
{
	char	*dup;

	dup = (char *)malloc(sizeof(char) * (n + 1));
	if (!dup)
		return (NULL);
	ft_memcpy(dup, str, n);
	dup[n] = '\0';
	return (dup);
}

//23
//line was too long
static char	**word_processor(char const *str, char chr, char **words, size_t n)
{
	char const	*start;
	char const	*end;
	size_t		i;

	i = 0;
	while (*str && i != n)
	{
		if (*str != chr)
		{
			start = str;
			while (*str != chr && *str)
				str++;
			end = str;
			words[i] = ft_strndup(start, end - start);
			if (!free_all(words, i))
				break ;
			i++;
		}
		else
			str++;
	}
	words[i] = NULL;
	return (words);
}

//14L
static size_t	word_counter(const char *str, char chr)
{
	size_t	i;

	i = 0;
	while (*str)
	{
		if (*str != chr)
		{
			i++;
			while (*str != chr && *str)
				str++;
		}
		str++;
	}
	return (i);
}

//13L
char	**ft_split(char const *s, char c)
{
	char	**words;
	size_t	n;

	if (!s)
		return (NULL);
	n = word_counter(s, c);
	words = malloc(sizeof(char *) * (n + 1));
	if (!words)
		return (NULL);
	words = word_processor(s, c, words, n);
	if (!words)
		free(words);
	return (words);
}
