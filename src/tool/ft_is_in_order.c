/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eguelin <eguelin@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/25 18:04:08 by eguelin           #+#    #+#             */
/*   Updated: 2023/01/25 18:06:40 by eguelin          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "ft_push_swap.h"

int	ft_is_in_order(t_lsti *stack)
{
	while (stack->next && stack->content > stack->next->content)
		stack = stack->next;
	if (stack->next)
		return (0);
	return (1);
}
