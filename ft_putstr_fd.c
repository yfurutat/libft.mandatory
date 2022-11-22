/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yuske <yuske@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/27 07:35:53 by yfurutat          #+#    #+#             */
/*   Updated: 2022/11/19 22:49:40 by yuske            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// int	main(int argc, char *argv[])
// {
// 	unsigned int	fd;
// 	char			*s;

// 	fd = atoi(argv[1]);
// 	s = argv[2];
// 	ft_putstr_fd(s, fd);
// }

// void	ft_putstr_fd(char *s, int fd)
// {
// 	size_t	len;

// 	if (!s)
// 		return ;
// 	len = ft_strlen(s);
// 	write(fd, s, len);
// }

// void	ft_putstr_fd(char *s, int fd)
// {
// 	size_t	i;

// 	i = 0;
// 	if (!s)
// 		return ;
// 	while (s[i])
// 	{
// 		ft_putchar_fd(s[i], fd);
// 		i++;
// 	}
// }

//7L
void	ft_putstr_fd(char *s, int fd)
{
	if (!s)
		return ;
	while (*s)
	{
		ft_putchar_fd(*s, fd);
		s++;
	}
}
