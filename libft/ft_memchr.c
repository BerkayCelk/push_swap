/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: berkay <berkay@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/07 21:28:16 by berkay            #+#    #+#             */
/*   Updated: 2026/01/24 01:53:54 by berkay           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*a;
	unsigned char	t;
	size_t			i;

	i = 0;
	t = (unsigned char)c;
	a = (unsigned char *)s;
	while (i < n)
	{
		if (a[i] == t)
			return ((void *)&a[i]);
		i++;
	}
	return (0);
}
