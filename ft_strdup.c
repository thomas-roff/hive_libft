/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thblack- <thblack-@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/23 11:54:15 by thblack-          #+#    #+#             */
/*   Updated: 2025/04/23 12:01:49 by thblack-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strdup.c(const char *s1)
{
	unsigned int	len;
	char			*cpy;

	len = ft_strlen(s1);
	cpy = malloc(len * sizeof(char));
	if (cpy == 0)
		return (0);
	ft_strlcpy(cpy, s1, len);
	return (cpy);
}
