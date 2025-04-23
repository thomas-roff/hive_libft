/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thblack- <thblack-@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/12 21:44:44 by thblack-          #+#    #+#             */
/*   Updated: 2025/04/23 11:34:40 by thblack-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	*ft_memset(void *b, int x, unsigned int len)
{
	unsigned char	*ptr;

	ptr = b;
	if (len == 0)
		return (b);
	while (*ptr != '\0' && len > 0)
	{
		*ptr = x;
		ptr++;
		len--;
	}
	return (b);
}
