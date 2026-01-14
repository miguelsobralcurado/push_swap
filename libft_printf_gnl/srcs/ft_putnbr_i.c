/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_i.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msobral- <msobral-@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/31 21:33:08 by msobral-          #+#    #+#             */
/*   Updated: 2025/12/15 16:47:09 by msobral-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft_printf.h"

int	ft_putnbr_i(int n)
{
	char	c;
	int		count;

	count = 0;
	if (n == -2147483648)
		return (ft_putstr_i("2147483648"));
	else if (n < 0)
	{
		n = -n;
		count += ft_putnbr_i(n);
	}
	else
	{
		if (n > 9)
			count += ft_putnbr_i(n / 10);
		c = (n % 10) + '0';
		count += ft_putchar_i(c);
	}
	return (count);
}
