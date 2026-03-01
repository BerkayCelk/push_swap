/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: berkceli <berkceli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/20 17:12:21 by berkceli          #+#    #+#             */
/*   Updated: 2026/01/20 18:54:19 by berkceli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	t_list	*cpy;
	int		count;

	if (!lst)
		return (0);
	cpy = lst;
	count = 0;
	while (cpy != 0)
	{
		count++;
		cpy = cpy->next;
	}
	return (count);
}
