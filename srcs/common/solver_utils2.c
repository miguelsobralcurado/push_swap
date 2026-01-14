/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   solver_utils2.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msobral- <msobral-@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/06 11:33:37 by msobral-          #+#    #+#             */
/*   Updated: 2026/01/06 12:21:05 by msobral-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

int	ft_case_rarrb(t_stack *a, t_stack *b, int n)
{
	int	i;

	i = 0;
	if (ft_find_place_b(b, n))
		i = ft_stksize(b) - ft_find_place_b(b, n);
	i += ft_find_index(a, n);
	return (i);
}

int	ft_case_rrarb(t_stack *a, t_stack *b, int n)
{
	int	i;

	i = 0;
	if (ft_find_index(a, n))
		i = ft_stksize(a) - ft_find_index(a, n);
	i += ft_find_place_b(b, n);
	return (i);
}

int	ft_case_rarrb_a(t_stack *a, t_stack *b, int n)
{
	int	i;

	i = 0;
	if (ft_find_index(b, n))
		i = ft_stksize(b) - ft_find_index(b, n);
	i += ft_find_place_a(a, n);
	return (i);
}

int	ft_case_rrarb_a(t_stack *a, t_stack *b, int n)
{
	int	i;

	i = 0;
	if (ft_find_place_a(a, n))
		i = ft_stksize(a) - ft_find_place_a(a, n);
	i += ft_find_index(b, n);
	return (i);
}
