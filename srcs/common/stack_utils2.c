/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack_utils2.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msobral- <msobral-@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/06 10:22:04 by msobral-          #+#    #+#             */
/*   Updated: 2026/01/08 10:48:37 by msobral-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	ft_stkfree(t_stack **lst)
{
	t_stack	*temp;

	if (!lst)
		return ;
	while (*lst)
	{
		temp = (*lst)->next;
		(*lst)->nbr = 0;
		free(*lst);
		*lst = temp;
	}
}

void	ft_stkadd_back(t_stack **stk, t_stack *new)
{
	if (!stk)
		return ;
	if (!*stk)
		*stk = new;
	else
		(ft_stklast(*stk))->next = new;
}

int	ft_find_index(t_stack *a, int n)
{
	int	i;

	i = 0;
	while (a->nbr != n)
	{
		i++;
		a = a->next;
	}
	a->index = 0;
	return (i);
}

int	ft_find_place_b(t_stack *stack_b, int n)
{
	int		i;
	t_stack	*temp;

	i = 1;
	if (n > stack_b->nbr && n < ft_stklast(stack_b)->nbr)
		i = 0;
	else if (n > ft_stkmax(stack_b) || n < ft_stkmin(stack_b))
		i = ft_find_index(stack_b, ft_stkmax(stack_b));
	else
	{
		temp = stack_b->next;
		while (stack_b->nbr < n || temp->nbr > n)
		{
			stack_b = stack_b->next;
			temp = stack_b->next;
			i++;
		}
	}
	return (i);
}

int	ft_find_place_a(t_stack *stack_a, int n)
{
	int		i;
	t_stack	*temp;

	i = 1;
	if (n < stack_a->nbr && n > ft_stklast(stack_a)->nbr)
		i = 0;
	else if (n > ft_stkmax(stack_a) || n < ft_stkmin(stack_a))
		i = ft_find_index(stack_a, ft_stkmin(stack_a));
	else
	{
		temp = stack_a->next;
		while (stack_a->nbr > n || temp->nbr < n)
		{
			stack_a = stack_a->next;
			temp = stack_a->next;
			i++;
		}
	}
	return (i);
}
