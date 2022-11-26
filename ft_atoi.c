/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yuske <yuske@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/16 21:08:45 by yuske             #+#    #+#             */
/*   Updated: 2022/11/26 18:32:32 by yuske            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_isspace(int ch);
static int	long_checker(int flg, long figure2p, char figure1);

//20L
int	ft_atoi(const char *str)
{
	long	nbr;
	int		flg;

	while (ft_isspace(*str))
		str++;
	flg = 1;
	if (*str == '-')
		flg = -1;
	if (*str == '-' || *str == '+')
		str++;
	nbr = 0;
	while (ft_isdigit(*str))
	{
		if (long_checker(flg, nbr, *str) && flg == 1)
			return ((int)(LONG_MAX));
		else if (long_checker(flg, nbr, *str) && flg == -1)
			return ((int)(LONG_MIN));
		nbr = (nbr * 10) + (*str++ - '0');
	}
	return ((int)nbr * flg);
}

static int	ft_isspace(int ch)
{
	return ((ch >= '\t' && ch <= '\r') || ch == ' ');
}

// //9L long checker 1
static int	long_checker(int flg, long figure2p, char figure1)
{
	if (figure2p > LONG_MAX / 10)
		return (1);
	else if (figure2p == LONG_MAX / 10)
	{
		if ((flg == 1 && figure1 - '0' > LONG_MAX % 10)
			|| (flg == -1 && figure1 - '0' > -(LONG_MIN % 10)))
			return (1);
	}
	return (0);
}

//2. 20L no long_checker
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

//3. 14L no long checker
// int	ft_atoi(const char *str)
// {
// 	int	nbr;
// 	int	flg;

// 	nbr = 0;
// 	flg = 1;
// 	while ((*str >= '\t' && *str <= '\r') || *str == ' ')
// 		str++;
// 	if (*str == '-')
// 		flg = -1;
// 	if (*str == '-' || *str == '+')
// 		str++;
// 	while (*str >= '0' && *str <= '9')
// 		nbr = (nbr * 10) + (*str++ - '0');
// 	return (nbr * flg);
// }

// static int	long_checker(int flg, long nbr, char chr)
// {
// 	long	lm_10th;

// 	lm_10th = LONG_MAX / 10;
// 	if (nbr > lm_10th)
// 		return (1);
// 	else if (nbr == lm_10th)
// 	{
// 		chr -= '0';
// 		if (flg == 1 && chr > LONG_MAX % 10)
// 			return (1);
// 		else if (flg == -1 && chr > -(LONG_MIN % 10))
// 			return (1);
// 	}
// 	return (0);
// }

//5L
// static int	long_checker(int flg, long figure2p, char figure1)
// {
// 	if (figure2p > LONG_MAX / 10 || (figure2p == LONG_MAX / 10
// 			&& ((flg == 1 && figure1 - '0' > LONG_MAX % 10)
// 				|| (flg == -1 && figure1 - '0' > -(LONG_MIN % 10)))))
// 		return (1);
// 	return (0);
// }

// 11L long checker 2
// static int	long_checker(int flg, long nbr, char chr)
// {
// 	long	lm_10th;
// 	int		lm_fig1;

// 	if (flg == -1)
// 		chr -= 1;
// 	chr -= '0';
// 	lm_10th = LONG_MAX / 10;
// 	lm_fig1 = LONG_MAX % 10;
// 	if (nbr > lm_10th || (nbr == lm_10th && chr > lm_fig1))
// 		return (1);
// 	return (0);
// }

//6L
// static int	long_checker(int flg, long nbr, char chr)
// {
// 	if (flg == -1)
// 		chr -= 1;
// 	if ((nbr == LONG_MAX / 10 && chr - '0' > LONG_MAX % 10)
// 		|| nbr > LONG_MAX / 10)
// 		return (1);
// 	return (0);
// }

//2. 20L
// int	ft_atoi(const char *str)
// {
// 	long	nbr;
// 	int		flg;

// 	nbr = 0;
// 	flg = 1;
// 	while (ft_isspace(*str))
// 		str++;
// 	if (*str == '-')
// 		flg = -1;
// 	if (*str == '-' || *str == '+')
// 		str++;
// 	while (ft_isdigit(*str))
// 	{
// 		if (flg == 1 && long_checker(flg, nbr, *str))
// 			return ((int)(LONG_MAX));
// 		else if (flg == -1 && long_checker(flg, nbr, *str))
// 			return ((int)(LONG_MIN));
// 		nbr = (nbr * 10) + (*str++ - '0');
// 	}
// 	return ((int)nbr * flg);
// }

// int	ft_atoi(const char *str)
// {
// 	long	nbr;
// 	int		flg;

// 	nbr = 0;
// 	flg = 1;
// 	while (ft_isspace(*str))
// 		str++;
// 	if (*str == '-')
// 		flg = -1;
// 	if (*str == '-' || *str == '+')
// 		str++;
// 	while (ft_isdigit(*str))
// 	{
// 		if (long_checker(flg, nbr, *str) == 1)
// 			return ((int)(LONG_MAX));
// 		else if (long_checker(flg, nbr, *str) == -1)
// 			return ((int)(LONG_MIN));
// 		nbr = (nbr * 10) + (*str++ - '0');
// 	}
// 	return ((int)nbr * flg);
// }

// int	ft_atoi(const char *str)
// {
// 	long	nbr;
// 	int		flg;

// 	nbr = 0;
// 	flg = 1;
// 	while (ft_isspace(*str))
// 		str++;
// 	if (*str == '-')
// 		flg = -1;
// 	if (*str == '-' || *str == '+')
// 		str++;
// 	while (ft_isdigit(*str))
// 	{
// 		if (long_checker(flg, nbr, *str) == 1)
// 		{
// 			if (flg == 1)
// 				return ((int)(LONG_MAX));
// 			else if (flg == -1)
// 				return ((int)(LONG_MIN));
// 		}
// 		nbr = (nbr * 10) + (*str++ - '0');
// 	}
// 	return ((int)nbr * flg);
// }
