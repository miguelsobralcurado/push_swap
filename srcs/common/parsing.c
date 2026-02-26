/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parsing.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msobral- <msobral-@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/04 14:09:35 by msobral-          #+#    #+#             */
/*   Updated: 2026/02/26 16:01:22 by msobral-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

static int	ft_atol(const char *str)
{
	int		sign;
	long	i;

	i = 0;
	sign = 1;
	while (ft_isspace(*str))
		str++;
	if (*str == '-' || *str == '+')
	{
		if (*str == '-')
			sign = -1;
		str++;
	}
	while (*str)
	{
		i = i * 10 + (*str - '0');
		str++;
	}
	return (i * sign);
}

static void	ft_check_valid_digits(int argc, char **argv)
{
	long	i;
	long	j;

	i = 1;
	while (i < argc)
	{
		j = 0;
		while (argv[i][j])
		{
			if (!ft_isdigit(argv[i][j]) && !ft_isspace(argv[i][j]))
				ft_error();
			j++;
		}
		i++;
	}
}

static t_stack	*ft_sub_process(char **argv)
{
	t_stack	*a;
	char	**tmp;
	long	i;
	long	j;

	a = NULL;
	i = 0;
	tmp = ft_split(argv[1], 32);
	while (tmp[i])
	{
		j = ft_atol(tmp[i]);
		if (j > INT_MAX || j < INT_MIN)
		{
			ft_freeall(tmp);
			ft_stkfree(&a);
			ft_error();
		}
		ft_stkadd_back(&a, ft_stknew(j));
		i++;
	}
	ft_freeall(tmp);
	return (a);
}

t_stack	*ft_process(int argc, char **argv)
{
	t_stack	*a;
	long	i;
	long	j;

	i = 1;
	a = NULL;
	if (argc < 2)
		return (NULL);
	ft_check_valid_digits(argc, argv);
	if (argc == 2)
		a = ft_sub_process(argv);
	else
	{
		while (i < argc)
		{
			j = ft_atol(argv[i]);
			if (j > INT_MAX || j < INT_MIN)
			{
				return (ft_stkfree(&a), ft_error(), NULL);
			}
			ft_stkadd_back(&a, ft_stknew(j));
			i++;
		}
	}
	return (a);
}
