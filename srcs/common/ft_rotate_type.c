/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rotate_type.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msobral- <msobral-@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/06 10:03:31 by msobral-          #+#    #+#             */
/*   Updated: 2026/01/06 14:28:03 by msobral-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

int	ft_rotate_type_ba(t_stack *a, t_stack *b)
{
	int		i;
	t_stack	*temp;

	temp = b;
	i = ft_case_rrarrb_a(a, b, b->nbr);
	while (temp)
	{
		if (i > ft_case_rarb_a(a, b, temp->nbr))
			i = ft_case_rarb_a(a, b, temp->nbr);
		if (i > ft_case_rrarrb_a(a, b, temp->nbr))
			i = ft_case_rrarrb_a(a, b, temp->nbr);
		if (i > ft_case_rarrb_a(a, b, temp->nbr))
			i = ft_case_rarrb_a(a, b, temp->nbr);
		if (i > ft_case_rrarb_a(a, b, temp->nbr))
			i = ft_case_rrarb_a(a, b, temp->nbr);
		temp = temp->next;
	}
	return (i);
}

int	ft_rotate_type_ab(t_stack *a, t_stack *b)
{
	int		i;
	t_stack	*temp;

	temp = a;
	i = ft_case_rrarrb(a, b, a->nbr);
	while (temp)
	{
		if (i > ft_case_rarb(a, b, temp->nbr))
			i = ft_case_rarb(a, b, temp->nbr);
		if (i > ft_case_rrarrb(a, b, temp->nbr))
			i = ft_case_rrarrb(a, b, temp->nbr);
		if (i > ft_case_rarrb(a, b, temp->nbr))
			i = ft_case_rarrb(a, b, temp->nbr);
		if (i > ft_case_rrarb(a, b, temp->nbr))
			i = ft_case_rrarb(a, b, temp->nbr);
		temp = temp->next;
	}
	return (i);
}
