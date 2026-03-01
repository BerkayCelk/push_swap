/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: berkay <berkay@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/30 20:06:01 by berkay            #+#    #+#             */
/*   Updated: 2025/11/30 20:32:04 by berkay           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	srclen;
	size_t	dstlen;
	size_t	i;

	i = 0;
	dstlen = 0;
	srclen = ft_strlen(src);
	while (dstlen < dstsize && dst[dstlen] != 0)
		dstlen++;
	if (dstlen >= dstsize)
		return (dstsize + srclen);
	while (dstlen + i < dstsize - 1 && src[i] != 0)
	{
		dst[dstlen + i] = src[i];
		i++;
	}
	dst[dstlen + i] = 0;
	return (dstlen + srclen);
}
