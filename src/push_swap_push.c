/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap_push.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: berkceli <berkceli@student.42istanbul.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/09 00:06:28 by berkceli          #+#    #+#             */
/*   Updated: 2026/03/09 00:08:04 by berkceli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "push_swap.h"

void	ft_push_a(t_stack **a, t_stack **b)
{
	t_stack	*temp;

	if (!*b)
		return ;
	temp = *b;
	*b = temp->next_value;
	if (*b)
		(*b)->prev_value = NULL;
	temp->prev_value = NULL;
	ft_stackadd_front(a, temp);
	write(1, "pa\n", 3);
}

void	ft_push_b(t_stack **a, t_stack **b)
{
	t_stack	*temp;

	if (!*a)
		return ;
	temp = *a;
	*a = temp->next_value;
	if (*a)
		(*a)->prev_value = NULL;
	temp->prev_value = NULL;
	ft_stackadd_front(b, temp);
	write(1, "pb\n", 3);
}
