/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_push_swap.h                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eguelin <eguelin@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/19 11:29:12 by eguelin           #+#    #+#             */
/*   Updated: 2023/01/29 15:40:51 by eguelin          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PUSH_SWAP_H
# define FT_PUSH_SWAP_H
# include <stdlib.h>
# include <unistd.h>

typedef struct s_list_int
{
	long				content;
	struct s_list_int	*next;
}	t_lsti;

void	ft_pa(t_lsti **stack_a, t_lsti **stack_b);
void	ft_pb(t_lsti **stack_a, t_lsti **stack_b);
void	ft_rra(t_lsti **stack_a);
void	ft_ra(t_lsti **stack_a);
void	ft_sa(t_lsti *stack_a);
void	ft_sb(t_lsti *stack_b);
void	ft_lstidelone(t_lsti *lst);
void	ft_lsticlear(t_lsti **lst);
void	ft_lstiadd_back(t_lsti **lst, t_lsti *new);
void	ft_sort_three(t_lsti **stack);
void	ft_sort_five(t_lsti **stack_a, t_lsti **stack_b);
void	ft_radix(t_lsti **stack_a, t_lsti **stack_b);
void	ft_putchar_fd(char c, int fd);
void	ft_putnbr_fd(int n, int fd);
void	ft_putstr_fd(char *s, int fd);

int		ft_lstisize(t_lsti *lst);
int		ft_print_nbr(int n);
int		ft_isdigit(int c);
int		ft_end_stack(t_lsti *stack);
int		ft_check_multiple(t_lsti *stack);
int		ft_is_in_order(t_lsti *stack);
int		ft_atoi(const char *str, int *error);

t_lsti	*ft_lstinew(int content);
t_lsti	*ft_lstilast(t_lsti *lst);
t_lsti	*ft_index(t_lsti *stack);
t_lsti	*ft_convert_argv(int argc, char **argv);

size_t	ft_strlen(const char *s);

char	**ft_split(char const *s, char c);

#endif
