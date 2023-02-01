/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_index.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eguelin <eguelin@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/25 15:32:48 by eguelin           #+#    #+#             */
/*   Updated: 2023/01/25 15:39:26 by eguelin          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "ft_push_swap.h"

t_lsti	*ft_index(t_lsti *stack)
{
	t_lsti			*stack_1;
	t_lsti			*stack_2;
	t_lsti			*block;
	t_lsti			*new_stack;
	unsigned int	i;

	stack_1 = stack;
	new_stack = NULL;
	while (stack_1)
	{
		stack_2 = stack;
		i = 0;
		while (stack_2)
		{
			if (stack_1->content < stack_2->content)
				i++;
			stack_2 = stack_2->next;
		}
		block = ft_lstinew(i);
		if (!block)
			return (ft_lsticlear(&new_stack), ft_lsticlear(&stack), NULL);
		ft_lstiadd_back(&new_stack, block);
		stack_1 = stack_1->next;
	}
	return (ft_lsticlear(&stack), new_stack);
}
