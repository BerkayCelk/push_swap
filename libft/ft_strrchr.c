/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: berkay <berkay@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/02 14:15:12 by berkay            #+#    #+#             */
/*   Updated: 2026/01/24 01:58:28 by berkay           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	size_t	leng;
	char	a;

	a = (char)c;
	leng = ft_strlen(s) + 1;
	while (leng-- > 0)
	{
		if (s[leng] == a)
			return ((char *)&s[leng]);
	}
	return (0);
}
