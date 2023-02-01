/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eguelin <eguelin@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/23 15:27:09 by eguelin           #+#    #+#             */
/*   Updated: 2023/01/27 14:01:29 by eguelin          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "ft_push_swap.h"

static void	ft_swap(t_lsti *stack);

void	ft_sa(t_lsti *stack_a)
{
	if (stack_a && stack_a->next)
	{
		ft_swap(stack_a);
		ft_putstr_fd("sa\n", 1);
	}
}

void	ft_sb(t_lsti *stack_b)
{
	if (stack_b && stack_b->next)
	{
		ft_swap(stack_b);
		ft_putstr_fd("sb\n", 1);
	}
}

static void	ft_swap(t_lsti *stack)
{
	int	tmp;

	tmp = stack->content;
	stack->content = stack->next->content;
	stack->next->content = tmp;
}
