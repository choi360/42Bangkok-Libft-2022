/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmethawa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/24 01:33:51 by kmethawa          #+#    #+#             */
/*   Updated: 2022/02/24 19:52:18 by kmethawa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/*
size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	dlen;
	size_t	slen;

	i = 0;
	dlen = ft_strlen(dst);
	slen = ft_strlen(src);
	if (dstsize == 0)
		return (slen);
	while (src[i] && dlen + i < dstsize -1)
	{
		dst[dlen + i] = src[i];
		i++;
	}
	dst[dlen + i] = 0;
	if (dlen < dstsize)
		return (dlen + slen);
	return (dstsize + slen);
}
*/
/*
size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t		n;
	size_t		nd;
	char		*pdst;
	char const	*psrc;

	pdst = dst;
	psrc = src;
	nd = 0;
	n = dstsize;
	while (*(pdst + nd) && n--)
		nd++;
	n = dstsize - nd;
	pdst = pdst + nd;
	if (n == 0)
		return (nd + ft_strlen(src));
	while (n != 1 && *psrc)
	{
		*pdst++ = *psrc;
		n--;
		psrc++;
	}
	*pdst = '\0';
	return (nd + ft_strlen(src));
}
*/

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
char	*s;
	size_t	len_dst;
	size_t	res;
	size_t	len_src;
	size_t	i;

	s = (char *)src;
	len_dst = ft_strlen(dst);
	len_src = ft_strlen(s);
	res = 0;
	i = 0;
	if (size > len_dst)
		res = len_src + len_dst;
	else
		res = len_src + size;
	while (s[i] && (len_dst + 1) < size)
	{
		dst[len_dst] = s[i];
		len_dst++;
		i++;
	}
	dst[len_dst] = '\0';
	return (res);