/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker_utils.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msobral- <msobral-@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/05 13:32:10 by msobral-          #+#    #+#             */
/*   Updated: 2026/01/06 15:18:52 by msobral-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

static int	sign(int c)
{
	return (c == '+' || c == '-');
}

static int	space(int c)
{
	return (c == ' ');
}

int	check_error(char **argv, int i, int j)
{
	while (argv[i])
	{
		j = 0;
		while (argv[i][j] != '\0')
		{
			if (sign(argv[i][j]))
			{
				j++;
				if (!ft_isdigit(argv[i][j]))
					return (false);
			}
			else if (ft_isdigit(argv[i][j]))
			{
				j++;
				if (argv[i][j] == '\0')
					break ;
				if (!ft_isdigit(argv[i][j]) && !space(argv[i][j]))
					return (false);
			}
			j++;
		}
		i++;
	}
	return (true);
}
