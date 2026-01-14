/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   operations_r.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msobral- <msobral-@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/12 16:01:29 by msobral-          #+#    #+#             */
/*   Updated: 2026/01/06 21:36:05 by msobral-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	ra(t_stack **a, int print)
{
	t_stack	*temp;

	if (!*a || !(*a)->next)
		return ;
	temp = *a;
	*a = ft_stklast(*a);
	(*a)->next = temp;
	*a = temp->next;
	temp->next = NULL;
	if (print == 0)
		ft_printf("ra\n");
}

void	rb(t_stack **b, int print)
{
	t_stack	*temp;

	if (!*b || !(*b)->next)
		return ;
	temp = *b;
	*b = ft_stklast(*b);
	(*b)->next = temp;
	*b = temp->next;
	temp->next = NULL;
	if (print == 0)
		ft_printf("rb\n");
}

void	rr(t_stack **a, t_stack **b, int print)
{
	ra(a, 1);
	rb(b, 1);
	if (print == 0)
		ft_printf("rr\n");
}
