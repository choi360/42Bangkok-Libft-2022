/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmethawa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/23 22:03:43 by kmethawa          #+#    #+#             */
/*   Updated: 2022/02/23 22:32:50 by kmethawa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	char		*pdst;
	char const	*psrc;

	pdst = dst;
	psrc = src;
	if (!dst)
		return (NULL);
	if ((unsigned long)pdst < (unsigned long)psrc)
		return (ft_memcpy(dst, src, len));
	else
	{
		while (len--)
			*(pdst + len) = *(psrc + len);
	}
	return (dst);
}
/*
void	*ft_memmove(void *dst, const void *src, size_t len)
{
	size_t				i;
	unsigned char		*pdst;
	const unsigned char	*psrc;

	pdst = (unsigned char *)dst;
	psrc = (unsigned char *)src;
	i = 0;
	if (!pdst && !psrc)
		return (NULL);
	if (pdst > psrc)
		while (++i <= len)
			pdst[len - i] = psrc[len - i];
	else
		while (len-- > 0)
			*(pdst++) = *(psrc++);
	return (dst);
}
*/
