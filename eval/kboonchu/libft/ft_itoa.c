/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kboonchu <kboonchu@student.42bangkok.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/23 13:43:53 by kboonchu          #+#    #+#             */
/*   Updated: 2022/02/24 00:08:02 by kboonchu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	rev(char *o, int i, int size, int sign)
{
	char	temp_c;
	int		offset;

	if (sign == 0)
		offset = sign;
	else
		offset = sign + 1;
	while (i < (size + offset) / 2)
	{
		temp_c = o[i];
		o[i] = o[size + offset - 1 - i];
		o[size + offset - 1 - i] = temp_c;
		i++;
	}
}

static void	to_itoa(int n, char *o, size_t size)
{
	int		temp;
	int		sign;
	int		val;
	size_t	i;

	sign = 1;
	if (n > 0)
		sign = 0;
	temp = n;
	i = sign;
	while (temp != 0)
	{
		val = temp % 10;
		if (val < 0)
			val = -val;
		o[i++] = val + '0';
		temp /= 10;
	}
	o[i] = '\0';
	i = sign;
	if (n < 0)
		o[0] = '-';
	rev(o, i, size, sign);
}

static size_t	find_size(int n)
{
	size_t	size;
	int		temp;

	size = 0;
	temp = n;
	while (temp != 0)
	{
		temp /= 10;
		size ++;
	}
	return (size);
}

char	*ft_itoa(int n)
{
	size_t	size;
	char	*o;

	size = find_size(n);
	if (n < 0)
		o = (char *)malloc(sizeof(char) * (size + 2));
	else if (n > 0)
		o = (char *)malloc(sizeof(char) * (size + 1));
	else
		o = (char *)malloc(sizeof(char) * (2));
	if (o == NULL)
		return (NULL);
	if (n == 0)
	{
		o[0] = '0';
		o[1] = '\0';
		return (o);
	}
	to_itoa(n, o, size);
	return (o);
}
