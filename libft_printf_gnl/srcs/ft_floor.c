/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_floor.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msobral- <msobral-@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/17 10:59:39 by msobral-          #+#    #+#             */
/*   Updated: 2026/02/23 11:23:19 by msobral-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft_printf.h"

double	ft_floor(double x)
{
	long long	i;

	if (x >= (double)LLONG_MAX || x <= (double)LLONG_MIN)
		return (x);
	i = (long long)x;
	if (x < 0 && x != (double)i)
		return ((double)(i - 1));
	return ((double)i);
}
