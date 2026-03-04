/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: berkceli <berkceli@student.42istanbul.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/27 17:29:49 by berkceli          #+#    #+#             */
/*   Updated: 2026/03/04 12:32:23 by berkceli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include "libft/libft.h"
#include <stdlib.h>
#include <unistd.h>

typedef struct s_stack
{
	struct s_stack	*prev_value;
	int				value;
	struct s_stack	*next_value;
}				t_stack;

t_stack	*stack_new(int value);
void	stack_add_back(t_stack **stack, t_stack *new_node);

#endif