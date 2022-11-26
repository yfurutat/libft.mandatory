/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yuske <yuske@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/01 20:37:07 by yuske             #+#    #+#             */
/*   Updated: 2022/11/26 16:47:21 by yuske            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	figure_counter(long int n);
// static size_t	figure_counter(long nbr, int flg);
// static void		int_processor(long nbr, size_t len, char *toa);

//1. 20L
char	*ft_itoa(int n)
{
	char		*toa;
	long int	nbr;
	size_t		len;

	nbr = n;
	len = figure_counter(nbr);
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

//13L
// static size_t	figure_counter(long int n)
// {
// 	size_t	i;

// 	i = 0;
// 	if (!n)
// 		return (1);
// 	else if (n < 0)
// 		i++;
// 	while (n)
// 	{
// 		n /= 10;
// 		i++;
// 	}
// 	return (i);
// }

// //11L
static size_t	figure_counter(long int n)
{
	size_t	i;

	i = 0;
	if (n <= 0)
		i++;
	while (n != 0)
	{
		n /= 10;
		i++;
	}
	return (i);
}

//2. 24L -> 19L iterative
//mallocしないとsegv
// char	*ft_itoa(int n)
// {
// 	char	*toa;
// 	long	nbr;
// 	int		flg;
// 	size_t	len;

	// if (n == 0)
	// 	return (ft_strdup("0"));
// 	nbr = n;
// 	flg = 1;
// 	if (n < 0)
// 		flg = -1;
// 	nbr *= flg;
// 	len = figure_counter(nbr, flg);
// 	toa = (char *)ft_calloc(sizeof(char), (len + 1));
// 	if (!toa)
// 		return (NULL);
// 	toa[len] = '\0';
// 	int_processor(nbr, --len, toa);
// 	if (flg == -1)
// 		toa[0] = '-';
// 	return (toa);
// }

//3. 16L iterative
// char	*ft_itoa(int n)
// {
// 	char	*to_ascii;
// 	long	from_integer;
// 	size_t	len;

// 	from_integer = n;
// 	if (n < 0)
// 		from_integer *= -1;
// 	len = figure_counter(from_integer, n);
// 	to_ascii = (char *)ft_calloc(sizeof(char), len + 1);
// 	if (!to_ascii)
// 		return (NULL);
// 	to_ascii[len] = '\0';
// 	int_processor(from_integer, --len, to_ascii);
// 	if (n < 0)
// 		to_ascii[0] = '-';
// 	return (to_ascii);
// }

// static void	int_processor(long from_integer, size_t len, char *to_ascii)
// {
// 	to_ascii[len] = from_integer % 10 + '0';
// 	if (from_integer / 10 && len--)
// 		int_processor(from_integer / 10, len, to_ascii);
// }

//8L iteration
// static void	int_processor(long nbr, size_t len, char *toa)
// {
// 	long int		figure2p;
// 	unsigned int	figure1;

// 	figure2p = nbr / 10;
// 	figure1 = nbr % 10;
// 	toa[len] = figure1 + '0';
// 	if (figure2p && len-- > 0)
// 		int_processor(figure2p, len, toa);
// }

//11L
// static size_t	figure_counter(long nbr, int flg)
// {
// 	size_t	i;

// 	i = 0;
// 	if (flg == -1 || nbr == 0)
// 		i++;
// 	while (nbr != 0)
// 	{
// 		nbr /= 10;
// 		i++;
// 	}
// 	return (i);
// }

//11L
// static size_t	figure_counter(long from_integer, int n)
// {
// 	size_t	i;

// 	i = 0;
// 	if (n <= 0)
// 		i++;
// 	while (from_integer)
// 	{
// 		from_integer /= 10;
// 		i++;
// 	}
// 	return (i);
// }

//8L
// static size_t	figure_counter(long from_integer, int n)
// {
// 	size_t	i;

// 	i = 0;
// 	if (n < 0)
// 		i++;
// 	while (from_integer / 10)
// 		i++;
// 	return (++i);
// }
// 	// i++;

// //18L iterative
// char	*ft_itoa(int n)
// {
// 	char	*toa;
// 	long	nbr;
// 	size_t	len;

// 	nbr = n;
// 	if (n < 0)
// 		nbr *= -1;
// 	len = figure_counter(nbr);
// 	if (n < 0)
// 		len += 1;
// 	toa = (char *)ft_calloc(sizeof(char), (len + 1));
// 	if (!toa)
// 		return (NULL);
// 	toa[len] = '\0';
// 	int_processor(nbr, --len, toa);
// 	if (n < 0)
// 		toa[0] = '-';
// 	return (toa);
// }

//11L
// static size_t	figure_counter(long nbr)
// {
// 	size_t	i;

// 	i = 0;
// 	if (nbr == 0)
// 		i++;
// 	while (nbr != 0)
// 	{
// 		nbr /= 10;
// 		i++;
// 	}
// 	return (i);
// }

// int	main()
// {
// 	printf("%s\n", ft_itoa(-1)); 
// 	printf("%s\n", ft_itoa(-0)); 
// 	printf("%s\n", ft_itoa(-+0)); 
// 	printf("%s\n", ft_itoa(-+-+-0)); 
// 	printf("%s\n", ft_itoa(-+-+-42)); 
// 	printf("%s\n", ft_itoa(-+-42)); 
// 	printf("%s\n", ft_itoa(0)); 
// 	return (0);
// }
