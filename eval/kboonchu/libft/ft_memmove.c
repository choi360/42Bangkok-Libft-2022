/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kboonchu <kboonchu@student.42bangkok.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/17 21:05:36 by kboonchu          #+#    #+#             */
/*   Updated: 2022/02/17 22:36:46 by kboonchu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// https://cs50.stackexchange.com/questions/14615/memory-overlap-in-c
// If overlapping happen, we need to copy from right to left
void	*ft_memmove(void *dst, const void *src, size_t len)
{
	long long	i;
	size_t		j;

	if ((unsigned long)dst - (unsigned long)src < len)
	{
		i = len;
		while (--i >= 0)
		{
			j = (size_t)i;
			((unsigned char *)dst)[j] = ((unsigned char *)src)[j];
		}
	}
	else
	{
		i = -1;
		while (++i < (long long) len)
		{
			j = (size_t)i;
			((unsigned char *)dst)[j] = ((unsigned char *)src)[j];
		}
	}
	return (dst);
}
