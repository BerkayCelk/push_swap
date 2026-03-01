/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: berkceli <berkceli@student.42istanbul.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/27 17:55:53 by berkceli          #+#    #+#             */
/*   Updated: 2026/03/01 13:09:06 by berkceli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_stack	*stack_new(int i)
{
	t_stack	*node;

	node = malloc(sizeof(t_stack));
	if (!node)
		return (NULL);
	node ->value = i;
	node -> prev = NULL;
	node -> next = NULL;
	return (node);
}

#include <stdio.h>

int main(int argc, char **argv)
{
	printf("kelime sayisi: %d\n", argc);
	for(int i = 0; i < argc ;i++)
		printf("argv[%d]: %s\n", i, argv[i]);
}

