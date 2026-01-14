/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   operations_s.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msobral- <msobral-@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/12 15:59:32 by msobral-          #+#    #+#             */
/*   Updated: 2026/01/06 15:41:58 by msobral-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	sa(t_stack **a, int print)
{
	t_stack	*temp;

	if (!*a || !(*a)->next)
		return ;
	temp = *a;
	*a = (*a)->next;
	temp->next = (*a)->next;
	(*a)->next = temp;
	if (print == 0)
		ft_printf("sa\n");
}

void	sb(t_stack **b, int print)
{
	t_stack	*temp;

	if (!*b || !(*b)->next)
		return ;
	temp = *b;
	*b = (*b)->next;
	temp->next = (*b)->next;
	(*b)->next = temp;
	if (print == 0)
		ft_printf("sb\n");
}

void	ss(t_stack **a, t_stack **b, int print)
{
	sa(a, 1);
	sb(b, 1);
	if (print == 0)
		ft_printf("ss\n");
}
