/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thblack- <thblack-@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/22 20:13:47 by thblack-          #+#    #+#             */
/*   Updated: 2025/04/23 11:38:55 by thblack-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

void	*ft_calloc(unsigned int count, unsigned int size)
{
	void			*mem;

	mem = malloc(count * size);
	if (mem == 0)
		return (mem);
	ft_bzero(mem, count, size);
	return (mem);
}
