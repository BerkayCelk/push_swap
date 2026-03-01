/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: berkay <berkay@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/07 22:27:55 by berkay            #+#    #+#             */
/*   Updated: 2026/01/24 01:24:21 by berkay           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	f;
	size_t	s;

	f = 0;
	if (needle == NULL)
		return ((char *)haystack);
	while (haystack[f] && f < len)
	{
		s = 0;
		while ((f + s < len) && (haystack[f + s] == needle[s]) && needle[s])
		{
			s++;
		}
		if (needle[s] == 0)
			return ((char *)&haystack[f]);
		f++;
	}
	return (0);
}
