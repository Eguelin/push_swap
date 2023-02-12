/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_argv.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eguelin <eguelin@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/25 15:47:44 by eguelin           #+#    #+#             */
/*   Updated: 2023/01/29 16:09:55 by eguelin          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "ft_push_swap.h"

static void	ft_free_tab(char **tab);
static int	ft_convert_argv2(t_lsti **stack, char *argv);

t_lsti	*ft_convert_argv(int argc, char **argv)
{
	int		i;
	t_lsti	*stack;

	i = 1;
	stack = NULL;
	while (i < (argc))
	{
		if (ft_convert_argv2(&stack, argv[i]))
			return (ft_lsticlear(&stack), NULL);
		i++;
	}
	if (ft_check_multiple(stack))
		return (ft_lsticlear(&stack), NULL);
	stack = ft_index(stack);
	return (stack);
}

static int	ft_convert_argv2(t_lsti **stack, char *argv)
{
	int		j;
	int		error;
	char	**tab;
	t_lsti	*block;

	j = 0;
	error = 0;
	tab = ft_split(argv, ' ');
	if (!tab || !tab[j])
		return (ft_lsticlear(stack), 1);
	while (tab[j])
	{
		block = ft_lstinew(ft_atoi(tab[j], &error));
		if (!block)
			return (ft_free_tab(tab), ft_lsticlear(stack), 1);
		ft_lstiadd_back(stack, block);
		if (error == -1)
			return (ft_free_tab(tab), ft_lsticlear(stack), 1);
		j++;
	}
	return (ft_free_tab(tab), 0);
}

static void	ft_free_tab(char **tab)
{
	size_t	i;

	i = 0;
	while (tab[i])
		free(tab[i++]);
	free(tab);
}
