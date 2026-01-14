/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msobral- <msobral-@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/14 10:42:24 by msobral-          #+#    #+#             */
/*   Updated: 2026/01/14 11:13:28 by msobral-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/push_swap.h"

static void	ft_check_sub(t_stack **a, t_stack **b, char *line)
{
	if (line[2] == 'a')
		rra(a, 1);
	else if (line[2] == 'b')
		rrb(b, 1);
	else if (line[2] == 'r')
		rrr(a, b, 1);
}

static char	*ft_check(t_stack **a, t_stack **b, char *line)
{
	if (line[0] == 's' && line[1] == 'a' && line[2] == '\n')
		sa(a, 1);
	else if (line[0] == 's' && line[1] == 'b' && line[2] == '\n')
		sb(b, 1);
	else if (line[0] == 'p' && line[1] == 'a' && line[2] == '\n')
		pa(a, b, 1);
	else if (line[0] == 'p' && line[1] == 'b' && line[2] == '\n')
		pb(a, b, 1);
	else if (line[0] == 'r' && line[1] == 'a' && line[2] == '\n')
		ra(a, 1);
	else if (line[0] == 'r' && line[1] == 'b' && line[2] == '\n')
		rb(b, 1);
	else if (line[0] == 'r' && line[1] == 'r' && line[3] == '\n')
		ft_check_sub(a, b, line);
	else if (line[0] == 'r' && line[1] == 'r' && line[2] == '\n')
		rr(a, b, 1);
	else if (line[0] == 's' && line[1] == 's' && line[2] == '\n')
		ss(a, b, 1);
	else
		ft_checker_error();
	return (get_next_line(0));
}

static void	ft_checker_helper(t_stack **a, t_stack **b, char *line)
{
	char	*tmp;

	while (line && *line != '\n')
	{
		tmp = line;
		line = ft_check(a, b, line);
		free(tmp);
	}
	if (*b)
		write(1, "KO\n", 3);
	else if (!ft_sorted_check(*a))
		write(1, "KO\n", 3);
	else
		write(1, "OK\n", 3);
	free(line);
}

int	main(int argc, char **argv)
{
	t_stack	*a;
	t_stack	*b;
	char	*line;

	b = NULL;
	a = ft_process(argc, argv);
	if (!a || ft_dup_check(a))
	{
		ft_stkfree(&a);
		ft_checker_error();
	}
	line = get_next_line(0);
	if (!line && !ft_sorted_check(a))
		write(1, "KO\n", 3);
	else if (!line && ft_sorted_check(a))
		write(1, "OK\n", 3);
	else
		ft_checker_helper(&a, &b, line);
	ft_stkfree(&b);
	ft_stkfree(&a);
	return (0);
}
