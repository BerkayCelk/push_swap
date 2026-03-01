/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: berkay <berkay@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/18 21:01:44 by berkay            #+#    #+#             */
/*   Updated: 2026/01/24 01:53:09 by berkay           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

t_list	*ft_lstnew(void *content)
{
	t_list	*dayim;

	dayim = (t_list *)malloc(sizeof(t_list));
	if (!dayim)
		return (NULL);
	dayim->content = content;
	dayim->next = NULL;
	return (dayim);
}
