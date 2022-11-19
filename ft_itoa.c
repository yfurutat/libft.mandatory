/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yuske <yuske@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/01 20:37:07 by yuske             #+#    #+#             */
/*   Updated: 2022/11/19 03:29:05 by yuske            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

//13L
static size_t	figure(long int n)
{
	size_t	i;

	i = 0;
	if (!n)
		return (1);
	else if (n < 0)
		i++;
	while (n)
	{
		n /= 10;
		i++;
	}
	return (i);
}

//20L
char	*ft_itoa(int n)
{
	char		*toa;
	long int	nbr;
	size_t		len;

	nbr = n;
	len = figure(nbr);
	toa = (char *)malloc(sizeof(char) * (len + 1));
	if (!toa)
		return (NULL);
	else if (n < 0)
		nbr *= -1;
	toa[len] = '\0';
	while (len--)
	{
		toa[len] = nbr % 10 + '0';
		nbr = nbr / 10;
	}
	if (n < 0)
		toa[0] = '-';
	return (toa);
}
