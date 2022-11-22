/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yuske <yuske@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/12 03:12:26 by yfurutat          #+#    #+#             */
/*   Updated: 2022/11/22 14:01:28 by yuske            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

//arg[2]==NULL -> segv!!!
//arg[2]!=NULL && arg[1]==NULL && arg[3] >0 ->segv!
//arg[2]!=NULL && arg[1]==NULL && arg[3]==0 
//->return: strlen(arg2) & dst = (null)!!!
// int	main()
// {
// 	// char	*dst = ft_calloc(100, sizeof(char));
// 	char	dst[100] = "hello, wor";

// 	// printf("19. %lu %s\n", ft_strlcat(dst, "abc", 0), dst);//3 hello world
// 	// printf("20. %lu %s\n", ft_strlcat(dst, "!!!hello world!!!", 0), dst);
// 	printf("%zu %s\n", ft_strlcat(dst, "ld!!!", 100), dst);
// 	// printf("%s\n", dst);
// 	// printf("%zu %s\n", ft_strlcat(dst, "!!!hello world!!!", 0), dst);
// 	return (0);
// }

//1. 17L
// size_t	ft_strlcat(char *dst, const char *src, size_t size_dst)
// {
// 	size_t	len_dst;
// 	size_t	i;

// 	if (size_dst == 0 && !dst && src)
// 		return (ft_strlen(src));
// 	len_dst = ft_strlen(dst);
// 	i = 0;
// 	while (src[i] && (len_dst + i + 1) < size_dst)
// 	{
// 		dst[len_dst + i] = src[i];
// 		i++;
// 	}
// 	if (len_dst > size_dst)
// 		len_dst = size_dst;
// 	else if (len_dst < size_dst)
// 		dst[len_dst + i] = '\0';
// 	return (len_dst + ft_strlen(src));
// }

//2. 19L
// size_t	ft_strlcat(char *dst, const char *src, size_t size_dst)
// {
// 	size_t	len_src;
// 	size_t	len_dst;
// 	size_t	i;

// 	len_src = ft_strlen(src);
// 	if (size_dst == 0 && !dst && src)
// 		return (len_src);
// 	len_dst = ft_strlen(dst);
// 	i = 0;
// 	if (len_dst > size_dst)
// 		len_dst = size_dst;
// 	while (src[i] && (len_dst + i + 1) < size_dst)
// 	{
// 		dst[len_dst + i] = src[i];
// 		i++;
// 	}
// 	if (len_dst < size_dst)
// 		dst[len_dst + i] = '\0';
// 	return (len_dst + len_src);
// }

//3. 16L
size_t	ft_strlcat(char *dst, const char *src, size_t size_dst)
{
	size_t	len_src;
	size_t	len_dst;

	len_src = ft_strlen(src);
	if (size_dst == 0 && !dst)
		return (len_src);
	len_dst = ft_strlen(dst);
	if (len_dst > size_dst)
		return (len_src + size_dst);
	while (*dst)
		dst++;
	while (*src && (len_dst + 1) < size_dst--)
		*dst++ = *src++;
	if (len_dst < size_dst)
		*dst = '\0';
	return (len_dst + len_src);
}

//4. 16L
// size_t	ft_strlcat(char *dst, const char *src, size_t size_dst)
// {
// 	size_t	len_src;
// 	size_t	len_dst;

// 	len_src = ft_strlen(src);
// 	if (size_dst == 0 && !dst)
// 		return (len_src);
// 	len_dst = ft_strlen(dst);
// 	if (len_dst > size_dst)
// 		len_dst = size_dst;
// 	while (*dst)
// 		dst++;
// 	while (*src && (len_dst + 1) < size_dst--)
// 		*dst++ = *src++;
// 	if (len_dst < size_dst)
// 		*dst = '\0';
// 	return (len_dst + len_src);
// }

//5. 16L
// size_t	ft_strlcat(char *dst, const char *src, size_t size_dst)
// {
// 	size_t	len_src;
// 	size_t	len_dst;

// 	len_src = ft_strlen(src);
// 	if (size_dst == 0 && !dst)
// 		return (ft_strlen(src));
// 	len_dst = ft_strlen(dst);
// 	if (len_dst > size_dst)
// 		return (ft_strlen(src) + size_dst);
// 	while (*dst)
// 		dst++;
// 	while (*src && (len_dst + 1) < size_dst--)
// 		*dst++ = *src++;
// 	if (len_dst < size_dst)
// 		*dst = '\0';
// 	return (len_dst + len_src);
// }

//6.
// size_t	ft_strlcat(char *dst, const char *src, size_t size_dst)
// {
// 	size_t	len_src;
// 	size_t	len_dst;
// 	size_t	i;

// 	len_src = ft_strlen(src);
// 	if (size_dst == 0 && !dst)
// 		return (len_src);
// 	len_dst = ft_strlen(dst);
// 	if (len_dst > size_dst)
// 		return (len_src + size_dst);
// 	i = 0;
// 	while (src[i] && len_dst + i < size_dst - 1)
// 	{
// 		dst[len_dst + i] = src[i];
// 		i++;
// 	}
// 	if (len_src > size_dst)
// 		dst[len_dst + i] = '\0';
// 	return (len_dst + len_src);
// }

//failure
// size_t	ft_strlcat(char *dst, const char *src, size_t size_dst)
// {
// 	// size_t	len_src;
// 	size_t	len_dst;
// 	size_t	i;

// 	// len_src = ft_strlen(src);
// 	if (size_dst == 0 && !dst)
// 		return (ft_strlen(src));
// 	len_dst = ft_strlen(dst);
// 	if (ft_strlen(dst) > size_dst)
// 		return (ft_strlen(src) + size_dst);
// 	i = 0;
// 	while (src[i] && len_dst + i < size_dst - 1)
// 	{
// 		dst[len_dst + i] = src[i];
// 		i++;
// 	}
// 	if (ft_strlen(src) > size_dst)
// 		dst[len_dst + i] = '\0';//!!!
// 	return (len_dst + ft_strlen(src));
// }

//failure
// size_t	ft_strlcat(char *dst, const char *src, size_t size_dst)
// {
// 	size_t	len_dst;

// 	if (size_dst == 0 && !dst && src)
// 		return (ft_strlen(src));
// 	len_dst = ft_strlen(dst);
// 	if (len_dst > size_dst)
// 		len_dst = size_dst;
// 	while (*dst)
// 		dst++;
// 	while (*src && (len_dst + 1) < size_dst--)
// 		*dst++ = *src++;
// 	if (len_dst < size_dst)
// 		*dst = '\0';
// 	return (len_dst + ft_strlen(src));
// }

//failure
// size_t	ft_strlcat(char *dst, const char *src, size_t size_dst)
// {
// 	size_t	len_src;
// 	size_t	len_dst;
// 	size_t	len_src2;
// 	size_t	len_dst2;
// 	size_t	i;

// 	len_src = ft_strlen(src);
// 	if (size_dst == 0 && !dst && src)
// 		return (len_src);
// 	len_dst = ft_strlen(dst);
// 	i = 0;
// 	while (src[i] && len_dst < size_dst - 1)
// 		dst[len_dst++] = src[i++];
// 	len_dst2 = ft_strlen(dst);
// 	len_src2 = ft_strlen(src);
// 	if (len_dst2 > size_dst)
// 		len_dst2 = size_dst;
// 	else if (len_dst2 < size_dst)
// 		dst[len_dst] = '\0';
// 	return (len_dst2 + len_src2);
// }

//failure
// size_t	ft_strlcat(char *dst, const char *src, size_t size_dst)
// {
// 	// size_t	len_src;
// 	size_t	len_dst;

// 	// len_src = ft_strlen(src);
// 	if (size_dst == 0 && !dst)
// 		return (ft_strlen(src));
// 	len_dst = ft_strlen(dst);
// 	if (len_dst > size_dst)
// 		return (ft_strlen(src) + size_dst);
// 	while (*dst)
// 		dst++;
// 	while (*src && (len_dst + 1) < size_dst--)
// 		*dst++ = *src++;
// 	if (len_dst < size_dst)
// 		*dst = '\0';
// 	return (ft_strlen(dst));
// }
