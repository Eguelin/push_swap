/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_five.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eguelin <eguelin@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/25 15:53:38 by eguelin           #+#    #+#             */
/*   Updated: 2023/01/27 13:11:53 by eguelin          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "ft_push_swap.h"

void	ft_sort_five(t_lsti **stack_a, t_lsti **stack_b)
{
	int	end;

	if (ft_is_in_order(*stack_a))
		return ;
	while ((*stack_a)->next->next->next)
	{
		end = ft_end_stack(*stack_a);
		if ((*stack_a)->content == 3 || (*stack_a)->content == 4)
			ft_pb(stack_a, stack_b);
		else if (end == 3 || end == 4)
			ft_rra(stack_a);
		else
			ft_ra(stack_a);
	}
	ft_sort_three(stack_a);
	if ((*stack_b)->next && (*stack_b)->next->content < (*stack_b)->content)
		ft_sb(*stack_b);
	while (*stack_b)
		ft_pa(stack_a, stack_b);
}
