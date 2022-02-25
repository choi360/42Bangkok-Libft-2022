/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kboonchu <kboonchu@student.42bangkok.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/22 20:54:35 by kboonchu          #+#    #+#             */
/*   Updated: 2022/02/24 20:46:53 by kboonchu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	find_split_size(char const *s, char c)
{
	size_t	split_size;
	char	*t;

	split_size = 0;
	t = (char *)s;
	while (*t != '\0')
	{
		while (*t != '\0' && *t != c)
			t++;
		while (*t != '\0' && *t == c)
			t++;
		split_size++;
	}
	return (split_size);
}

static size_t	find_next_ind(char const *s, char c)
{
	size_t	i;

	i = 0;
	while (s[i] != '\0' && s[i] != c)
		i++;
	return (i);
}

static void	split(char **output, const char *s, char c)
{
	size_t	j;
	size_t	i;
	size_t	w;
	char	*t;

	w = 0;
	t = (char *)s;
	i = find_next_ind(t, c);
	while (i != 0)
	{
		output[w] = (char *)malloc(sizeof(char) * (i + 1));
		j = 0;
		while (j < i)
			output[w][j++] = *(t++);
		output[w][j] = '\0';
		w++;
		while (*t != '\0' && *t == c)
			t++;
		i = find_next_ind(t, c);
	}
	output[w] = NULL;
}

char	**ft_split(char const *s, char c)
{
	char	**output;

	while (*s != '\0' && *s == c)
		s++;
	output = (char **)malloc(sizeof(char *) * (find_split_size(s, c) + 1));
	if (output == NULL)
		return (NULL);
	split(output, s, c);
	return (output);
}
