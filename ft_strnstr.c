/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yuske <yuske@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/24 16:18:16 by yfurutat          #+#    #+#             */
/*   Updated: 2022/11/22 14:17:30 by yuske            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// int	main()
// {
// 	printf("ft_1. %s\n", ft_strnstr("abbbcdefg", "bbc", 20));
// 	printf("   1. %s\n", strnstr("abbbcdefg", "bbc", 20));
// 	printf("ft_2. %s\n", ft_strnstr("abcdefg", "", 0));
// 	// str_s = "" -> return str_l
// 	printf("   2. %s\n", strnstr("abcdefg", "", 0));//str_s = "" -> return str_l
// 	printf("ft_3. %s\n", ft_strnstr("", "", 0));//str_s = "" -> return str_l
// 	printf("   3. %s\n", strnstr("", "", 0));//str_s = "" -> return str_l
// 	printf("ft_4. %s\n", ft_strnstr("abcdefghijklmn", "abc", 2));
// 	// n < str_s ->null
// 	printf("   4. %s\n", strnstr("abcdefghijklmn", "abc", 2));
// 	// n < str_s -> null
// 	printf("ft_5. %s\n", ft_strnstr("abcdefghijklmn", "abc", 0));
// 	// n == 0 -> null
// 	printf("   5. %s\n", strnstr("abcdefghijklmn", "abc", 0));//n == 0 -> null
// 	printf("ft_6. %s\n", ft_strnstr("abcdefg", "is", 0));//null
// 	printf("   6. %s\n", strnstr("abcdefg", "is", 0));//null
// 	printf("ft_7. %s\n", ft_strnstr(NULL, "is", 0));//(null)...not segv
// 	printf("   7. %s\n", strnstr(NULL, "is", 0));//(null)...not segv
// 	printf("ft_8. %s\n", ft_strnstr(NULL, "", 2));//null
// 	printf("   8. %s\n", strnstr(NULL, "", 2));//null
// 	// printf("ft_9. %s\n", ft_strnstr(NULL, "abc", 2));//segv
// 	// printf("   9. %s\n", strnstr(NULL, "abc", 2));//segv
// 	// printf("ft_10. %s\n", ft_strnstr(NULL, "is", 3));//segv
// 	// printf("   10. %s\n", strnstr(NULL, "is", 3));//segv
// 	// printf("ft_11. %s\n", ft_strnstr("abcdefghijklmn", NULL, 3));//segv
// 	// printf("   11. %s\n", strnstr("abcdefghijklmn", NULL, 3));//segv
// 	// printf("ft_12. %s\n", ft_strnstr("abcdefghijklmn", NULL, 0));//segv
// 	// printf("   12. %s\n", strnstr("abcdefghijklmn", NULL, 0));//segv
// 	// printf("ft_13. %s\n", ft_strnstr(NULL, NULL, 0));//segv
// 	// printf("   13. %s\n", strnstr(NULL, NULL, 0));//segv
// 	// printf("ft_14. %s\n", ft_strnstr(NULL, NULL, 3));//segv
// 	// printf("   14. %s\n", strnstr(NULL, NULL, 3));//segv
// // ASSERT_EQ_PTR(ft_strnstr(str, "", i), strnstr(str, "", i));
// }

//n needs to be larger than the length of str_s
//1. str_s == NULL -> segv
//2. str_s == empty array -> return str_l.
//3. str_l == NULL && n > 0 -> segv
//4. n == 0, n < len_s -> null
//for segv protection:
//if (!str_l || !str_s)
//	return (NULL);

//1. 15L segvしないために本家と挙動がズレるところあり
// char	*ft_strnstr(const char *str_l, const char *str_s, size_t len_n)
// {
// 	size_t	len_s;

// 	len_s = ft_strlen(str_s);
// 	if (*str_s == '\0')
// 		return ((char *)str_l);
// 	else if (len_n == 0 || *str_l == '\0')
// 		return (NULL);
// 	while (len_n >= len_s && *str_l)
// 	{
// 		if (!(ft_strncmp((char *)str_l, (char *)str_s, len_s)))
// 			return ((char *)str_l);
// 		str_l++;
// 		len_n--;
// 	}
// 	return (NULL);
// }

//2. 17L
// char	*ft_strnstr(const char *str_l, const char *str_s, size_t n)
// {
// 	size_t	len_s;

// 	if (!str_s)
// 		return ((char *)SIGSEGV);
// 	len_s = ft_strlen(str_s);
// 	if (len_s == 0)
// 		return ((char *)str_l);
// 	else if (!str_l && n != 0)
// 		return ((char *)SIGSEGV);
// 	while (n >= len_s && *str_l)
// 	{
// 		if (!(ft_strncmp((char *)str_l, (char *)str_s, len_s)))
// 			return ((char *)str_l);
// 		str_l++;
// 		n--;
// 	}
// 	return (NULL);
// }

//3. 11L
// char	*ft_strnstr(const char *str_l, const char *str_s, size_t n)
// {
// 	if (!str_s || !str_l)
// 		SIGSEGV ;
// 	else if (*str_s == '\0' || n == 0)
// 		return ((char *)str_l);
// 	while (n-- > ft_strlen(str_s) - 1 && *str_l)
// 	{
// 		if (!(ft_strncmp(str_l, str_s, ft_strlen(str_s))))
// 			return ((char *)str_l);
// 		str_l++;
// 	}
// 	return (NULL);
// }

// char	*ft_strnstr(const char *str_l, const char *str_s, size_t n)
// {
// 	if (*str_s == '\0')
// 		return ((char *)str_l);
// 	else if (!str_s || (!str_l && n != 0))
// 		SIGSEGV ;
// 	while (n-- > ft_strlen(str_s) - 1 && *str_l)
// 	{
// 		if (!(ft_strncmp(str_l, str_s, ft_strlen(str_s))))
// 			return ((char *)str_l);
// 		str_l++;
// 	}
// 	return (NULL);
// }

//9L
char	*ft_strnstr(const char *str_l, const char *str_s, size_t n)
{
	if (ft_strlen(str_s) == 0 || (!str_l && n == 0))
		return ((char *)str_l);
	while (n-- > ft_strlen(str_s) - 1 && *str_l)
	{
		if (!(ft_strncmp(str_l, str_s, ft_strlen(str_s))))
			return ((char *)str_l);
		str_l++;
	}
	return (NULL);
}
