/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kboonchu <kboonchu@student.42bangkok.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/14 18:08:41 by kboonchu          #+#    #+#             */
/*   Updated: 2022/02/15 22:44:40 by kboonchu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *str)
{
	int		sign;
	int		i;
	int		sum;
	char	*t_str;

	t_str = ft_strtrim(str, " \n\t\v\f\r");
	i = 0;
	sign = 1;
	sum = 0;
	if (t_str[i] != '\0' && t_str[i] == '-')
		sign = -1;
	if (t_str[i] != '\0' && (t_str[i] == '-' || t_str[i] == '+'))
		i = 1;
	while (t_str[i] != '\0' && ft_isdigit(t_str[i]))
		sum = sum * 10 + sign * (t_str[i++] - 48);
	free(t_str);
	return (sum);
}
