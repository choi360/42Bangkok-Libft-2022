/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmethawa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/21 00:43:31 by kmethawa          #+#    #+#             */
/*   Updated: 2022/03/21 00:46:02 by kmethawa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	char	*output;

	output = (char *)malloc(sizeof(char) * (ft_strlen(s1) + 1));
	if (!output)
		return (NULL);
	ft_memcpy(output, s1, ft_strlen(s1) + 1);
	return (output);
}
