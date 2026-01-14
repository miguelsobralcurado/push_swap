/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_countnbr_base.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msobral- <msobral-@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/04 11:30:07 by msobral-          #+#    #+#             */
/*   Updated: 2025/12/15 16:44:51 by msobral-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft_printf.h"

size_t	ft_countnbr_base(int n, int base)
{
	size_t	count;

	if (n == -2147483648)
		return (11);
	count = 0;
	if (n < 0)
	{
		n = -n;
		count++;
	}
	while (n >= base)
	{
		n /= base;
		count++;
	}
	if (n >= 0)
		count++;
	return (count);
}
