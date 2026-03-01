/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: berkay <berkay@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/30 12:46:13 by berkay            #+#    #+#             */
/*   Updated: 2026/01/24 01:54:07 by berkay           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h" 

void	*ft_memcpy(void *dest, const void *src, size_t len)
{
	unsigned char	*destt;
	unsigned char	*sourc;
	size_t			i;

	if (!dest && !src)
		return (dest);
	destt = (unsigned char *)dest;
	sourc = (unsigned char *)src;
	i = 0;
	while (i < len)
	{
		destt[i] = sourc[i];
		i++;
	}
	return (dest);
}
