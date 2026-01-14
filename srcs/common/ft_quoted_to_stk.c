/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_quoted_to_stk.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msobral- <msobral-@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/05 15:51:39 by msobral-          #+#    #+#             */
/*   Updated: 2026/01/06 15:34:48 by msobral-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

t_stack	*ft_quoted_to_stk(char **argv)
{
	t_stack	*stack_a;
	char	**temp;

	stack_a = NULL;
	temp = ft_split(argv[1], 32);
	ft_args_to_stk(temp, &stack_a);
	ft_freeall(temp);
	free(temp);
	return (stack_a);
}
