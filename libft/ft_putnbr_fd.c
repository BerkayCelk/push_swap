/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: berkay <berkay@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/14 15:01:01 by berkay            #+#    #+#             */
/*   Updated: 2026/01/18 20:45:04 by berkay           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	long	nm;

	nm = n;
	if (nm < 0)
	{
		ft_putchar_fd('-', fd);
		nm = -nm;
	}
	if (nm > 9)
		ft_putnbr_fd(nm / 10, fd);
	ft_putchar_fd((nm % 10) + '0', fd);
}
