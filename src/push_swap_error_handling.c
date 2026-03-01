/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap_error_handling.c                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: berkceli <berkceli@student.42istanbul.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/01 11:51:51 by berkceli          #+#    #+#             */
/*   Updated: 2026/03/01 13:08:42 by berkceli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static int	ft_isnum(char *str)
{
	int	i;

	i = 0;

	if (str[i] == '-' || str[i] == '+')
		i++;
	if (str[i] == 0)
		return (0);
	while (str[i])
	{
		if (!(str[i] >= '0' && str[i] <= '9'))
			return (0);
		i++;
	}
	return (1);
}

void	ft_error(void)
{
	write(2, "Error\n", 6);
	exit(1);
}

void	ft_free_res(char **res)
{
	int	i;

	if (!res)
		return ;
	i = 0;
	while (res[i])
	{
		free(res[i]);
		i++;
	}
	free(res);
}



void	controller(int argc, char **argv)
{
	char		**res;
	int			i;
	int			j;
	long int	num;

	i = 1;
	while (i < argc)
	{
		res = ft_split(argv[i], ' ');
		j = 0;
		while (res[j])
		{
			if (!ft_isnum(res[j]))
			{
				ft_free_res(res);
				ft_error();
			}
			j++;
		}
		ft_free_res(res);
		i++;
	}
}

