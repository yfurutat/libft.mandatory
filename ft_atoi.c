/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yuske <yuske@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/16 21:08:45 by yuske             #+#    #+#             */
/*   Updated: 2022/11/19 03:25:37 by yuske            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

//no long_checker
// int	ft_atoi(const char *str)
// {
// 	int	nbr;
// 	int		flg;

// 	nbr = 0;
// 	flg = 1;
// 	while ((*str >= '\t' && *str <= '\r') || *str == ' ')
// 		str++;
// 	if (*str == '-' || *str == '+')
// 	{
// 		if (*str == '-')
// 			flg *= -1;
// 		str++;
// 	}
// 	while (*str >= '0' && *str <= '9')
// 	{
// 		nbr = (nbr * 10) + (*str - '0');
// 		str++;
// 	}
// 	nbr *= flg;
// 	return (nbr);
// }

static int	long_checker(int flg, long nbr, char chr)
{
	long	lm_10th;
	int		lm_fig1;

	if (flg == -1)
		chr -= 1;
	chr -= '0';
	lm_10th = LONG_MAX / 10;
	lm_fig1 = LONG_MAX % 10;
	if (nbr > lm_10th || (nbr == lm_10th && chr > lm_fig1))
		return (1);
	return (0);
}

//2. 20L
int	ft_atoi(const char *str)
{
	long	nbr;
	int		flg;

	nbr = 0;
	flg = 1;
	while ((*str >= '\t' && *str <= '\r') || *str == ' ')
		str++;
	if (*str == '-')
		flg = -1;
	if (*str == '-' || *str == '+')
		str++;
	while (ft_isdigit(*str))
	{
		if (flg == 1 && long_checker(flg, nbr, *str))
			return ((int)(LONG_MAX));
		else if (flg == -1 && long_checker(flg, nbr, *str))
			return ((int)(LONG_MIN));
		nbr = (nbr * 10) + (*str++ - '0');
	}
	return ((int)nbr * flg);
}
