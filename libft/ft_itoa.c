/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: berkay <berkay@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/11 21:28:19 by berkay            #+#    #+#             */
/*   Updated: 2026/01/24 01:50:19 by berkay           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	get_len(long n)
{
	int	i;

	i = 0;
	if (n <= 0)
		i = 1;
	while (n != 0)
	{
		n /= 10;
		i++;
	}
	return (i);
}

char	*ft_itoa(int n)
{
	long		nm;
	int			len;
	char		*ptr;

	nm = n;
	len = get_len (nm);
	ptr = (char *)malloc(sizeof(char) * (len + 1));
	if (!ptr)
		return (0);
	if (nm == 0)
		ptr[0] = '0';
	if (nm < 0)
	{
		ptr[0] = '-';
		nm = -nm;
	}
	ptr[len] = 0;
	while (--len >= 0 && nm > 0)
	{
		ptr[len] = (nm % 10) + '0';
		nm /= 10;
	}
	return (ptr);
}
