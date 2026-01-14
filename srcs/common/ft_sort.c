/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msobral- <msobral-@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/06 12:55:26 by msobral-          #+#    #+#             */
/*   Updated: 2026/01/06 15:46:55 by msobral-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

static void	ft_sort_till_3(t_stack **a, t_stack **b)
{
	t_stack	*temp;
	int		i;

	while (ft_stksize(*a) > 3 && !ft_sorted_check(*a))
	{
		temp = *a;
		i = ft_rotate_type_ab(*a, *b);
		while (i >= 0)
		{
			if (i == ft_case_rarb(*a, *b, temp->nbr))
				i = ft_apply_rarb(a, b, temp->nbr, 'a');
			else if (i == ft_case_rrarrb(*a, *b, temp->nbr))
				i = ft_apply_rrarrb(a, b, temp->nbr, 'a');
			else if (i == ft_case_rarrb(*a, *b, temp->nbr))
				i = ft_apply_rarrb(a, b, temp->nbr, 'a');
			else if (i == ft_case_rrarb(*a, *b, temp->nbr))
				i = ft_apply_rrarb(a, b, temp->nbr, 'a');
			else
				temp = temp->next;
		}
	}
}

static t_stack	*ft_sort_b(t_stack **a)
{
	t_stack	*b;

	b = NULL;
	if (ft_stksize(*a) > 3 && !ft_sorted_check(*a))
		pb(a, &b, 0);
	if (ft_stksize(*a) > 3 && !ft_sorted_check(*a))
		pb(a, &b, 0);
	if (ft_stksize(*a) > 3 && !ft_sorted_check(*a))
		ft_sort_till_3(a, &b);
	if (!ft_sorted_check(*a))
		ft_sort_three(a);
	return (b);
}

static t_stack	**ft_sort_a(t_stack **a, t_stack **b)
{
	t_stack	*temp;
	int		i;

	while (*b)
	{
		temp = *b;
		i = ft_rotate_type_ba(*a, *b);
		while (i >= 0)
		{
			if (i == ft_case_rarb_a(*a, *b, temp->nbr))
				i = ft_apply_rarb(a, b, temp->nbr, 'b');
			else if (i == ft_case_rrarrb_a(*a, *b, temp->nbr))
				i = ft_apply_rrarrb(a, b, temp->nbr, 'b');
			else if (i == ft_case_rarrb_a(*a, *b, temp->nbr))
				i = ft_apply_rarrb(a, b, temp->nbr, 'b');
			else if (i == ft_case_rrarb_a(*a, *b, temp->nbr))
				i = ft_apply_rrarb(a, b, temp->nbr, 'b');
			else
				temp = temp->next;
		}
	}
	return (a);
}

void	ft_sort(t_stack **a)
{
	t_stack	*b;
	int		i;

	b = NULL;
	if (ft_stksize(*a) == 2)
		sa(a, 0);
	else
	{
		b = ft_sort_b(a);
		a = ft_sort_a(a, &b);
		i = ft_find_index(*a, ft_stkmin(*a));
		if (i < ft_stksize(*a) - i)
			while ((*a)->nbr != ft_stkmin(*a))
				ra(a, 0);
		else
			while ((*a)->nbr != ft_stkmin(*a))
				rra(a, 0);
	}
}
