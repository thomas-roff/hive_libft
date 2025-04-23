/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thblack- <thblack-@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/19 22:13:42 by thblack-          #+#    #+#             */
/*   Updated: 2025/04/19 23:04:39 by thblack-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	*ft_memcpy(void *dest, void *src, unsigned int n)
{
	unsigned int	i;
	char			*tdest;
	char			*tsrc;

	i = 0;
	tdest = dest;
	tsrc = src;
	while (i < n)
	{
		tdest[i] = tsrc[i];
		i++;
	}
	return (dest);
}
