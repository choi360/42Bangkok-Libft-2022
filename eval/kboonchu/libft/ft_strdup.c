/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kboonchu <kboonchu@student.42bangkok.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/20 12:24:33 by kboonchu          #+#    #+#             */
/*   Updated: 2022/02/20 12:32:55 by kboonchu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	char	*output;

	output = (char *)malloc(sizeof(char) * (ft_strlen(s1) + 1));
	if (output == NULL)
		return (NULL);
	ft_memcpy(output, s1, ft_strlen(s1) + 1);
	return (output);
}
