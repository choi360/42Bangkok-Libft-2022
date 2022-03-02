/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsomsa <tsomsa@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/24 14:06:57 by tsomsa            #+#    #+#             */
/*   Updated: 2022/02/24 14:06:59 by tsomsa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	count_pos(long n);

char	*ft_itoa(int n)
{
	int		m;
	long	x;
	char	*str;

	x = (long) n;
	m = count_pos(n);
	if (n >= 0)
		str = malloc(sizeof(char) * m + 1);
	else
	{
		m += 1;
		x = x * -1;
		str = malloc(sizeof(char) * m + 1);
		str[0] = '-';
	}
	str[m--] = '\0';
	if (x == 0)
		str[0] = '0';
	while (x > 0)
	{
		str[m--] = (x % 10) + '0';
		x /= 10;
	}
	return (str);
}

static int	count_pos(long n)
{
	int		i;

	i = 0;
	if (n == 0)
		return (1);
	if (n < 0)
		n *= -1;
	while (n > 0)
	{
		n /= 10;
		i++;
	}
	return (i);
}
