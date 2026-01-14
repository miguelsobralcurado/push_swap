/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   solver_utils.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msobral- <msobral-@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/15 16:18:25 by msobral-          #+#    #+#             */
/*   Updated: 2026/01/06 11:29:47 by msobral-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

int	ft_case_rarb(t_stack *a, t_stack *b, int n)
{
	int	i;

	i = ft_find_place_b(b, n);
	if (i < ft_find_index(a, n))
		i = ft_find_index(a, n);
	return (i);
}

int	ft_case_rarb_a(t_stack *a, t_stack *b, int n)
{
	int	i;

	i = ft_find_place_a(a, n);
	if (i < ft_find_index(b, n))
		i = ft_find_index(b, n);
	return (i);
}

int	ft_case_rrarrb(t_stack *a, t_stack *b, int n)
{
	int	i;

	i = 0;
	if (ft_find_place_b(b, n))
		i = ft_stksize(b) - ft_find_place_b(b, n);
	if ((i < (ft_stksize(a) - ft_find_index(a, n))) && ft_find_index(a, n))
		i = ft_stksize(a) - ft_find_index(a, n);
	return (i);
}

int	ft_case_rrarrb_a(t_stack *a, t_stack *b, int n)
{
	int i;

	i = 0;
	if (ft_find_place_a(a, n))
		i = ft_stksize(a) - ft_find_place_a(a, n);
	if ((i < (ft_stksize(b) - ft_find_index(b, n))) && ft_find_index(b, n))
		i = ft_stksize(b) - ft_find_index(b, n);
	return (i);
}

