/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thblack- <thblack-@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/22 20:01:44 by thblack-          #+#    #+#             */
/*   Updated: 2025/04/23 11:47:10 by thblack-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_memchr(const void *s, int c, int n)
{
	int		i;
	char	cc;
	char	*str;

	i = 0;
	cc = (char)c;
	str = (char *)s;
	while (i < n)
	{
		if (str[i] == cc)
			return (&str[i]);
		i++;
	}
	return (0);
}
