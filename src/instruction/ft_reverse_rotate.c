/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_reverse_rotate.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eguelin <eguelin@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/23 18:10:59 by eguelin           #+#    #+#             */
/*   Updated: 2023/01/27 14:01:52 by eguelin          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "ft_push_swap.h"

static void	ft_reverse_rotate(t_lsti **stack);

void	ft_rra(t_lsti **stack_a)
{
	if (*stack_a)
	{
		ft_reverse_rotate(stack_a);
		ft_putstr_fd("rra\n", 1);
	}
}

static void	ft_reverse_rotate(t_lsti **stack)
{
	t_lsti	*tmp;
	t_lsti	*lst;

	lst = *stack;
	while (lst->next->next)
		lst = lst->next;
	tmp = lst->next;
	lst->next = NULL;
	tmp->next = *stack;
	*stack = tmp;
}
