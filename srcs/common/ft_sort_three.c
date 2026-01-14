/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_three.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msobral- <msobral-@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/15 16:17:52 by msobral-          #+#    #+#             */
/*   Updated: 2026/01/06 21:39:21 by msobral-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	ft_sort_three(t_stack **a)
{
	if (ft_sorted_check(*a))
		return ;
	if ((*a)->nbr == ft_stkmin(*a) || ft_find_index(*a, ft_stkmax(*a)) == 1)
		rra(a, 0);
	else if ((*a)->nbr == ft_stkmax(*a))
		ra(a, 0);
	if (!ft_sorted_check(*a))
		sa(a, 0);
}
