/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_three.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eguelin <eguelin@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/25 15:53:38 by eguelin           #+#    #+#             */
/*   Updated: 2023/01/25 18:40:10 by eguelin          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "ft_push_swap.h"

void	ft_sort_three(t_lsti **stack)
{
	while (!ft_is_in_order(*stack))
	{
		if ((*stack)->content == 2)
			ft_rra(stack);
		else if ((*stack)->content == 0)
			ft_ra(stack);
		else if ((*stack)->next->content > (*stack)->content)
			ft_sa(*stack);
		else if ((*stack)->content == 1)
			ft_rra(stack);
	}
}
