/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msobral- <msobral-@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/04 14:00:09 by msobral-          #+#    #+#             */
/*   Updated: 2026/02/23 11:21:47 by msobral-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

int	main(int argc, char **argv)
{
	t_stack	*a;

	a = ft_process(argc, argv);
	if (!a || ft_dup_check(a))
	{
		ft_stkfree(&a);
		ft_error();
	}
	if (!ft_sorted_check(a))
		ft_sort(&a);
	ft_stkfree(&a);
	return (0);
}

/* static void	ft_printstk(t_stack **stk)
{
	if (!stk)
		return ;
	while (*stk)
	{
		ft_printf("%d ", (*stk)->nbr);
		*stk = (*stk)->next;
	}
		ft_printf("\n");
}
*/