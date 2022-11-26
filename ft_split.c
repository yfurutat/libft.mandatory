/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yuske <yuske@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/01 20:36:34 by yuske             #+#    #+#             */
/*   Updated: 2022/11/26 17:02:10 by yuske            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	counter(const char *str, char chr);
static char		**processor(char const *str, char chr, char **words, size_t n);
static char		**free_f_all(char **words, size_t i);
// static char	**free_all(char **words, size_t n);
// static char		*ft_strndup(const char *str, size_t n);

//11L
char	**ft_split(char const *s, char c)
{
	char	**words;
	size_t	n;

	if (!s)
		return (NULL);
	n = counter(s, c);
	words = malloc(sizeof(char *) * (n + 1));
	if (!words)
		return (NULL);
	words = processor(s, c, words, n);
	return (words);
}
	//33L words[n + 1] = NULL;
	//34L if (!words)
	// 	free(words);

//14L
static size_t	counter(const char *str, char chr)
{
	size_t	n;

	n = 0;
	while (*str)
	{
		if (*str != chr)
		{
			n++;
			while (*str != chr && *str)
				str++;
		}
		str++;
	}
	return (n);
}

static char	**processor(char const *str, char chr, char **words, size_t n)
{
	size_t	start;
	size_t	j;
	size_t	i;

	i = 0;
	j = 0;
	while (str[j] && i < n)
	{
		if (str[j] != chr)
		{
			start = j;
			while (str[j] != chr && str[j])
				j++;
			words[i] = ft_substr(str, start, j - start);
			if (!free_f_all(words, i))
				return (words);
			i++;
		}
		else
			j++;
	}
	words[i] = NULL;
	return (words);
}
			//74L
			// words[i] = ft_strndup(&str[start], j - start);

//11L
static char	**free_f_all(char **words, size_t i)
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

// static char	**free_all(char **words, size_t n)
// {
// 	size_t	i;

// 	i = 0;
// 	if (!words[i])
// 	{
// 		while (i < n)
// 		{
// 			free(words[i]);
// 			i++;
// 		}
// 		free(words);
// 		words = NULL;
// 	}
// 	return (words);
// }

//8L
//start->str=char*, end-start->len=size_t...automatically processed?
// static char	*ft_strndup(const char *str, size_t n)
// {
// 	char	*dup;

// 	dup = (char *)malloc(sizeof(char) * (n + 1));
// 	if (!dup)
// 		return (NULL);
// 	ft_memcpy(dup, str, n);
// 	dup[n] = '\0';
// 	return (dup);
// }

//23L
//protype line was too long
				//65L break ;
// static char	**processor(char const *str, char chr, char **words, size_t n)
// {
// 	char const	*start;
// 	char const	*end;
// 	size_t		i;

// 	i = 0;
// 	while (*str && i != n)
// 	{
// 		if (*str != chr)
// 		{
// 			start = str;
// 			while (*str != chr && *str)
// 				str++;
// 			end = str;
			// words[i] = ft_substr(str, start, end - start);
// 			words[i] = ft_strndup(start, end - start);
// 			if (!free_f_all(words, i))
// 				return (words);
// 			i++;
// 		}
// 		else
// 			str++;
// 	}
// 	words[i] = NULL;
// 	return (words);
// }
