/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   operations_rr.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msobral- <msobral-@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/12 16:01:25 by msobral-          #+#    #+#             */
/*   Updated: 2026/01/06 11:06:46 by msobral-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	rra(t_stack **a, int print)
{
	t_stack	*temp;
	int		i;

	if (!*a || !(*a)->next)
		return ;
	i = 0;
	temp = *a;
	while ((*a)->next)
	{
		*a = (*a)->next;
		i++;
	}
	(*a)->next = temp;
	while (i > 1)
	{
		temp = temp->next;
		i--;
	}
	temp->next = NULL;
	if (print == 0)
		ft_printf("rra\n");
}

void	rrb(t_stack **b, int print)
{
	t_stack	*temp;
	int		i;

	if (!*b || !(*b)->next)
		return ;
	i = 0;
	temp = *b;
	while ((*b)->next)
	{
		*b = (*b)->next;
		i++;
	}
	(*b)->next = temp;
	while (i > 1)
	{
		temp = temp->next;
		i--;
	}
	temp->next = NULL;
	if (print == 0)
		ft_printf("rrb\n");
}

void	rrr(t_stack **a, t_stack **b, int print)
{
	rra(a, 1);
	rrb(b, 1);
	if (print == 0)
		ft_printf("rrr\n");
}
