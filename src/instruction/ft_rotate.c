/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rotate.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eguelin <eguelin@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/23 17:39:09 by eguelin           #+#    #+#             */
/*   Updated: 2023/01/27 14:00:12 by eguelin          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "ft_push_swap.h"

static void	ft_rotate(t_lsti **stack);

void	ft_ra(t_lsti **stack_a)
{
	if (*stack_a)
	{
		ft_rotate(stack_a);
		ft_putstr_fd("ra\n", 1);
	}
}

static void	ft_rotate(t_lsti **stack)
{
	t_lsti	*tmp;

	tmp = *stack;
	*stack = (*stack)->next;
	tmp->next = NULL;
	ft_lstiadd_back(stack, tmp);
}
