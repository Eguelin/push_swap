/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_push.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eguelin <eguelin@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/23 15:51:36 by eguelin           #+#    #+#             */
/*   Updated: 2023/01/26 11:40:36 by eguelin          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "ft_push_swap.h"

static void	ft_push(t_lsti **stack_1, t_lsti **stack_2);

void	ft_pa(t_lsti **stack_a, t_lsti **stack_b)
{
	if (*stack_b)
	{
		ft_push(stack_b, stack_a);
		ft_putstr_fd("pa\n", 1);
	}
}

void	ft_pb(t_lsti **stack_a, t_lsti **stack_b)
{
	if (*stack_a)
	{
		ft_push(stack_a, stack_b);
		ft_putstr_fd("pb\n", 1);
	}
}

static void	ft_push(t_lsti **stack_1, t_lsti **stack_2)
{
	t_lsti	*tmp;

	tmp = *stack_1;
	*stack_1 = (*stack_1)->next;
	tmp->next = *stack_2;
	*stack_2 = tmp;
}
