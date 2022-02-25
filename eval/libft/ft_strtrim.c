/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kboonchu <kboonchu@student.42bangkok.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/14 23:28:34 by kboonchu          #+#    #+#             */
/*   Updated: 2022/02/24 17:07:51 by kboonchu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	int		size;
	int		st;
	int		end;
	char	*out;

	st = 0;
	size = ft_strlen(s1);
	end = size - 1;
	while (ft_strchr(set, s1[st]) && st < end)
		st++;
	while (ft_strchr(set, s1[end]) && end >= 0)
		end--;
	if (end < st)
	{
		out = (char *)malloc(sizeof(char) * 1);
		out[0] = '\0';
		return (out);
	}
	out = ft_substr(s1, st, end - st + 1);
	return (out);
}
