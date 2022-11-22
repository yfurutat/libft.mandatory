/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yuske <yuske@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/24 16:18:01 by yfurutat          #+#    #+#             */
/*   Updated: 2022/11/22 14:40:52 by yuske            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

//1.
// char	*ft_strrchr(const char *str, int ch)
// {
// 	char	*str_caster;
// 	char	*re;
// 	size_t	end;

// 	re = NULL;
// 	end = ft_strlen(str);
// 	str_caster = (char *)str;
// 	if (ch == '\0')
// 		return (&str_caster[end]);
// 	while (end > 0)
// 	{
// 		end--;
// 		if (str_caster[end] == (char)ch)
// 		{
// 			re = &str_caster[end];
// 			break ;
// 		}
// 	}
// 	return (re);
// }

//2. 12L
// char	*ft_strrchr(const char *str, int ch)
// {
// 	char	*re;

// 	re = NULL;
// 	while (*str)
// 	{
// 		if (*str == (char)ch)
// 			re = (char *)str;
// 		str++;
// 	}
// 	if ((char)ch == '\0')
// 		return ((char *)str);
// 	return (re);
// }

//3.　20L
// char	*ft_strrchr(const char *str, int ch)
// {
// 	char	*re;
// 	size_t	rear;

// 	re = NULL;
// 	rear = ft_strlen(str);
// 	while (*str)
// 		str++;
// 	if ((char)ch == '\0')
// 		return ((char *)str);
// 	while (rear >= 0)
// 	{
// 		if (*str == (char)ch)
// 		{
// 			re = (char *)str;
// 			break ;
// 		}
// 		else if (rear == 0)
// 			break ;
// 		str--;
// 		rear--;
// 	}
// 	return (re);
// }

//4. 16L　most readable?
//headにstrの最初の文字を代入
//ループでstrを終端まで送り、chが空文字なら終端ポインタを返す
//後ろから遡り、chと一致する文字に当たるまでループ
//最初まで遡っても見つからなければNULLを返す
// char	*ft_strrchr(const char *str, int ch)
// {
// 	char	head;

// 	if (!str)
// 		SIGSEGV ;
// 	head = *str;
// 	while (*str)
// 		str++;
// 	if ((char)ch == '\0')
// 		return ((char *)str);
// 	while (*str != (char)ch)
// 	{
// 		if (*str == head)
// 			return (NULL);
// 		str--;
// 	}
// 	return ((char *)str);
// }

//5. 12L
// char	*ft_strrchr(const char *str, int ch)
// {
// 	const char	*head;

// 	head = str;
// 	while (*str)
// 		str++;
// 	while (*str != (const char)ch)
// 	{
// 		if (str == head)
// 			return (NULL);
// 		str--;
// 	}
// 	return ((char *)str);
// }

//6. 13L
//*strが空の文字列->rear==0
//→whileループをスルー
// char	*ft_strrchr(const char *str, int ch)
// {
// 	char	*str_caster;
// 	size_t	rear;

// 	str_caster = (char *)str;
// 	rear = ft_strlen(str);
// 	if ((char)ch == '\0')
// 		return (&str_caster[rear]);
// 	while (rear-- > 0)
// 	{
// 		if (str_caster[rear] == (char)ch)
// 			return (&str_caster[rear]);
// 	}
// 	return (NULL);
// }

//7. 12L
//chが終端文字なら、whileループをスルー。
//*strが空の文字列->rear==0
//->while文の中に入るが、すぐにif文に当たる。->NULL
//rear==0まで遡ってもchrが見つからない場合、
//単にループを外れるとstr_caster[0]を返してしまう。
//そのため、if文でnullを返す。
// char	*ft_strrchr(const char *str, int ch)
// {
// 	char	*str_caster;
// 	size_t	rear;

// 	str_caster = (char *)str;
// 	rear = ft_strlen(str);
// 	while (str_caster[rear] != (char)ch && rear >= 0)
// 	{
// 		if (rear == 0)
// 			return (NULL);
// 		rear--;
// 	}
// 	return (&str_caster[rear]);
// }

//8. 12L
// char	*ft_strrchr(const char *str, int ch)
// {
// 	char	*str_caster;
// 	size_t	rear;

// 	rear = ft_strlen(str);
// 	while (str[rear] != (char)ch && rear >= 0)
// 	{
// 		if (rear == 0)
// 			return (NULL);
// 		rear--;
// 	}
// 	str_caster = (char *)&str[rear];
// 	return (str_caster);
// }

//9. 10L
char	*ft_strrchr(const char *str, int ch)
{
	size_t	rear;

	rear = ft_strlen(str);
	while (str[rear] != (char)ch && rear >= 0)
	{
		if (rear == 0)
			return (NULL);
		rear--;
	}
	return ((char *)&str[rear]);
}

// //infinite loop
// char	*ft_strrchr(const char *str, int ch)
// {
// 	while (*str)
// 		ft_strchr(*&str, ch);
// 	return ((char *)str);
// }
