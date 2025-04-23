/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thblack- <thblack-@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/19 22:23:37 by thblack-          #+#    #+#             */
/*   Updated: 2025/04/23 11:37:33 by thblack-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	*ft_memmove(void *dst, const void *src, int len)
{
	int		i;
	char	*dstc;
	char	*srcc;

	i = -1;
	dstc = (char *)dst;
	srcc = (char *)src;
	if (srcc < dstc)
	{
		while (--len >= 0)
			*(dstc + len) = *(srcc + len);
	}
	else
	{
		while (i++ < len)
			*(dstc + i) = *(srcc + i);
	}
	return (dst);
}
