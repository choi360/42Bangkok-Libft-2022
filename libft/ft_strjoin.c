/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmethawa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/21 17:02:34 by kmethawa          #+#    #+#             */
/*   Updated: 2022/03/21 17:09:04 by kmethawa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	size1;
	size_t	size2;
	size_t	i;
	char	*out;

	size1 = ft_strlen(s1);
	size2 = ft_strlen(s2);
	out = (char *)malloc(sizeof(char) * (size1 + size2 + 1));
	if (out == NULL || s1 == NULL || s2 == NULL)
		return (NULL);
	ft_strlcpy(out, s1, size1 + 1);
	i = size1;
	while (i < size1 + size2)
	{
		out[i] = s2[i - size1];
		i++;
	}
	out[i] = '\0';
	return (out);
}
