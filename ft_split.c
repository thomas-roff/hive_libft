/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thblack- <thblack-@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/02 14:20:52 by thblack-          #+#    #+#             */
/*   Updated: 2025/05/05 15:35:21 by thblack-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>
#include <stddef.h>

typedef struct s_word
{
	size_t	start;
	size_t	len;
}			t_word;

static size_t	ft_wcount(char const *s, char c)
{
	size_t	wcount;

	wcount = 0;
	while (*s)
	{
		if (*s != c && *s)
		{
			wcount++;
			while (*s != c && *s)
				s++;
		}
		else
			s++;
	}
	return (wcount);
}

static t_word	ft_findword(char const *s, char c, size_t windex)
{
	t_word	word;
	size_t	wcount;
	size_t	i;

	wcount = 0;
	i = 0;
	while (s[i])
	{
		if (s[i] != c && s[i])
		{
			word.start = i;
			word.len = 0;
			while (s[i] != c && s[i])
			{
				word.len++;
				i++;
			}
			if (wcount++ == windex)
				return (word);
		}
		else
			i++;
	}
	return ((t_word){0, 0});
}

static void	ft_freearray(char **array)
{
	size_t	i;

	i = 0;
	while (array[i])
	{
		free(array[i]);
		i++;
	}
	free(array);
}

char	**ft_split(char const *s, char c)
{
	char	**array;
	size_t	wcount;
	t_word	word;
	size_t	i;

	if (!s)
		return (NULL);
	wcount = ft_wcount(s, c);
	array = malloc((wcount + 1) * sizeof(char *));
	if (!array)
		return (NULL);
	i = 0;
	while (i < wcount)
	{
		word = ft_findword(s, c, i);
		array[i] = malloc((word.len + 1) * sizeof(char));
		if (!array[i])
			return (ft_freearray(array), NULL);
		ft_strlcpy(array[i], s + word.start, word.len + 1);
		i++;
	}
	array[i] = NULL;
	return (array);
}
