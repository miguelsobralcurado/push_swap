/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rotate_and_push.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msobral- <msobral-@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/05 16:00:07 by msobral-          #+#    #+#             */
/*   Updated: 2026/01/05 23:18:38 by msobral-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

int	ft_apply_rarb(t_stack **a, t_stack **b, int n, char c)
{
	if (c == 'a')
	{
		while ((*a)->nbr != n && ft_find_place_b(*b, n) > 0)
			rr(a, b, 0);
		while ((*a)->nbr != n)
			ra(a, 0);
		while (ft_find_place_b(*b, n) > 0)
			rb(b, 0);
		pb(a, b, 0);
	}
	else
	{
		while ((*b)->nbr != n && ft_find_place_a(*a, n) > 0)
			rr(a, b, 0);
		while ((*b)->nbr != n)
			rb(b, 0);
		while (ft_find_place_a(*a, n) > 0)
			ra(a, 0);
		pa(a, b, 0);
	}
	return (-1);
}

int	ft_apply_rrarrb(t_stack **a, t_stack **b, int n, char c)
{
	if (c == 'a')
	{
		while ((*a)->nbr != n && ft_find_place_b(*b, n) > 0)
			rrr(a, b, 0);
		while ((*a)->nbr != n)
			rra(a, 0);
		while (ft_find_place_b(*b, n) > 0)
			rrb(b, 0);
		pb(a, b, 0);
	}
	else
	{
		while ((*b)->nbr != n && ft_find_place_a(*a, n) > 0)
			rrr(a, b, 0);
		while ((*b)->nbr != n)
			rrb(b, 0);
		while (ft_find_place_a(*a, n) > 0)
			rra(a, 0);
		pa(a, b, 0);
	}
	return (-1);
}

int	ft_apply_rrarb(t_stack **a, t_stack **b, int n, char c)
{
	if (c == 'a')
	{
		while ((*a)->nbr != n)
			rra(a, 0);
		while (ft_find_place_b(*b, n) > 0)
			rb(b, 0);
		pb(a, b, 0);
	}
	else
	{
		while ((*b)->nbr != n)
			rb(b, 0);
		while (ft_find_place_a(*a, n) > 0)
			rra(a, 0);
		pa(a, b, 0);
	}
	return (-1);
}

int	ft_apply_rarrb(t_stack **a, t_stack **b, int n, char c)
{
	if (c == 'a')
	{
		while ((*a)->nbr != n)
			ra(a, 0);
		while (ft_find_place_b(*b, n) > 0)
			rrb(b, 0);
		pb(a, b, 0);
	}
	else
	{
		while ((*b)->nbr != n)
			rrb(b, 0);
		while (ft_find_place_a(*a, n) > 0)
			ra(a, 0);
		pa(a, b, 0);
	}
	return (-1);
}
