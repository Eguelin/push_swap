/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   o.c                                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eguelin <eguelin@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/25 15:42:09 by eguelin           #+#    #+#             */
/*   Updated: 2023/01/25 15:42:27 by eguelin          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "ft_push_swap.h"

int	ft_check_multiple(t_lsti *stack)
{
	t_lsti	*stack_2;

	while (stack)
	{
		stack_2 = stack->next;
		while (stack_2)
		{
			if (stack->content == stack_2->content)
				return (1);
			stack_2 = stack_2->next;
		}
		stack = stack->next;
	}
	return (0);
}
