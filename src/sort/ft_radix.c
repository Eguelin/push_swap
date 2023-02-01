/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_radix.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eguelin <eguelin@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/26 13:23:35 by eguelin           #+#    #+#             */
/*   Updated: 2023/01/27 12:25:14 by eguelin          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "ft_push_swap.h"

void	ft_radix(t_lsti **stack_a, t_lsti **stack_b)
{
	int	i;
	int	j;
	int	size;

	i = 0;
	size = ft_lstisize(*stack_a);
	while (!ft_is_in_order(*stack_a))
	{
		j = 0;
		while (j < size)
		{
			if (!((*stack_a)->content >> i & 1))
				ft_ra(stack_a);
			else
				ft_pb(stack_a, stack_b);
			j++;
		}
		while (*stack_b)
		{
			ft_pa(stack_a, stack_b);
		}
		i++;
	}
}
