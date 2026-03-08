/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap_swap.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: berkceli <berkceli@student.42istanbul.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/08 23:37:05 by berkceli          #+#    #+#             */
/*   Updated: 2026/03/09 00:18:06 by berkceli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "push_swap.h"

static int	swap_stack(t_stack **stack)
{
	t_stack	*first;
	t_stack	*second;

	if (!*stack || !(*stack)->next_value)
		return (0);
	first = *stack;
	second = (*stack)->next_value;
	first->next_value = second->next_value;
	if (first->next_value)
		first->next_value->prev_value = first;
	second->next_value = first;
	second->prev_value = NULL;
	first->prev_value = second;
	*stack = second;
	return (1);
}

void	ft_swap_a(t_stack **a)
{
	if (!swap_stack(a))
		return ;
	write(1, "sa\n", 3);
}

void	ft_swap_b(t_stack **b)
{
	if (!swap_stack(b))
		return ;
	write(1, "sb\n", 3);
}

void	ft_swap_a_b(t_stack **a, t_stack **b)
{
	int	swapped_a;
	int	swapped_b;

	swapped_a = swap_stack(a);
	swapped_b = swap_stack(b);
	if (swapped_a && swapped_b)
		write(1, "ss\n", 3);
}
