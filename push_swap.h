/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: berkceli <berkceli@student.42istanbul.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/27 17:29:49 by berkceli          #+#    #+#             */
/*   Updated: 2026/03/08 23:25:34 by berkceli         ###   ########.fr       */
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
void    format_lmt_ctrl(int argc, char **argv);
t_stack *stack_init(int argc, char **argv);
void    ft_stack_clear(t_stack *stack);
void    ft_free_res(char **res);
void    ft_error(void);
t_stack	*ft_new_stack(int value);
void	ft_stackadd_back(t_stack **stack, t_stack *new);
void	ft_stackadd_front(t_stack **stack, t_stack *new);
t_stack	*ft_stacklast(t_stack *stack);
int		ft_stack_size(t_stack **stack);

#endif