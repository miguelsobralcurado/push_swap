/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_floor.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msobral- <msobral-@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/17 10:59:39 by msobral-          #+#    #+#             */
/*   Updated: 2025/12/17 11:02:13 by msobral-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft_printf.h"

double ft_floor(double x)
{
    if (x >= (double)LLONG_MAX || x <= (double)LLONG_MIN)
        return (x);
    long long i = (long long)x;
    if (x < 0 && x != (double)i)
        return ((double)(i - 1));
    return ((double)i);
}
