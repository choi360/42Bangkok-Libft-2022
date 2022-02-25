/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kboonchu <kboonchu@student.42bangkok.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/16 14:27:29 by kboonchu          #+#    #+#             */
/*   Updated: 2022/02/24 20:23:21 by kboonchu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	d;
	size_t	s;

	d = ft_strlen(dst);
	s = ft_strlen(src);
	if (dstsize < d || dstsize == 0)
		return (dstsize + s);
	i = 0;
	while (src[i] != '\0' && i + d < dstsize - 1)
	{
		dst[i + d] = src[i];
		i++;
	}
	dst[i + d] = '\0';
	if (dstsize < d)
		d = dstsize;
	return ((size_t)((long long)ft_strlen(src) + d));
}
