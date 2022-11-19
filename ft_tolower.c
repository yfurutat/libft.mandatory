/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yuske <yuske@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/24 15:44:31 by yfurutat          #+#    #+#             */
/*   Updated: 2022/11/18 22:18:52 by yuske            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// int	main(void)
// {
// 	printf("%c\n", ft_tolower('Q'));
// 	return (0);
// }

//1. magic nbr -> better be avoided
// int	ft_tolower(int i)
// {
// 	if (i >= 65 && i <= 90)
// 		i = i + 32;
// 	return (i);
// }

//2. character literal -> better than 1, but not best
// int	ft_tolower(int i)
// {
// 	if (i >= 'A' && i <= 'Z')
// 		i += ' ';
// 	return (i);
// }

//3. is this easier to understand even for the beginners?
// better use fewer funcs?
// static int	ft_isupper(int c)
// {
// 	return (c >= 'A' && c <= 'Z');
// }

// int	ft_tolower(int i)
// {
// 	if (ft_isupper(i))
// 		i += ('a' - 'A');
// 	return (i);
// }

//4. express with the dif -> should look clearer than the previous
// int	ft_tolower(int i)
// {
// 	if (i >= 'A' && i <= 'Z')
// 		i -= ('A' - 'a');
// 	return (i);
// }

//5. 4 might be the easiest to intuitively understand
//is there any difference in the process speed?
int	ft_tolower(int i)
{
	if (i >= 'A' && i <= 'Z')
		i += ('a' - 'A');
	return (i);
}
