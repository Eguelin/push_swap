/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eguelin <eguelin@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/08 19:40:55 by eguelin           #+#    #+#             */
/*   Updated: 2023/01/26 11:40:58 by eguelin          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "ft_push_swap.h"

static int	ft_atoi_convert(const char *str, int *neg, int *error);

int	ft_atoi(const char *str, int *error)
{
	size_t	pos;
	int		neg;
	long	somme;

	pos = 0;
	neg = 1;
	somme = 0;
	while (str[pos] == 32 || (str[pos] >= 9 && str[pos] <= 13))
		pos++;
	if (str[pos] == '-')
	{
		neg *= -1;
		pos++;
	}
	else if (str[pos] == '+')
		pos++;
	if (!ft_isdigit(str[pos]))
		return (*error = -1, 0);
	somme = ft_atoi_convert(str + pos, &neg, error);
	return (somme * neg);
}

static int	ft_atoi_convert(const char *str, int *neg, int *error)
{
	long	somme;
	size_t	pos;

	pos = 0;
	somme = 0;
	while ((str[pos] >= 48 && str[pos] <= 57))
	{
		somme = somme * 10 + (str[pos] - '0');
		if ((somme * *neg) > 2147483647 || (somme * *neg) < -2147483648)
			return (*error = -1, 0);
		pos++;
	}
	while (str[pos] == 32 || (str[pos] >= 9 && str[pos] <= 13))
		pos++;
	if (str[pos])
		return (*error = -1, 0);
	return (*error = 0, somme);
}
