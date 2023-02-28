/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_push_swap.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eguelin <eguelin@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/14 11:39:23 by eguelin           #+#    #+#             */
/*   Updated: 2023/02/28 13:35:49 by eguelin          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "ft_push_swap.h"

int	main(int argc, char **argv)
{
	t_lsti	*stack_a;
	t_lsti	*stack_b;
	int		i;

	if (argc < 2)
		return (0);
	stack_b = NULL;
	stack_a = ft_convert_argv(argc, argv);
	if (!stack_a)
		return (ft_putstr_fd("Error\n", 2), -1);
	i = ft_lstisize(stack_a);
	if (i <= 3)
		ft_sort_three(&stack_a);
	else if (i <= 5)
		ft_sort_five(&stack_a, &stack_b);
	else
		ft_radix(&stack_a, &stack_b);
	return (ft_lsticlear(&stack_a), 0);
}
