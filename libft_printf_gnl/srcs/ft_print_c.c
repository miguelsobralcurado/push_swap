/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_c.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msobral- <msobral-@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/06 12:32:43 by msobral-          #+#    #+#             */
/*   Updated: 2025/12/15 16:46:16 by msobral-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft_printf.h"

int	ft_print_c(t_print *values)
{
	char	c;

	c = va_arg(values->ap, int);
	values->type = c;
	ft_update_values(values, 1);
	if (values->width && !values->dash)
	{
		values->printed += ft_right_align(values);
		return (ft_putchar_i(c));
	}
	if (values->width && values->dash)
	{
		values->printed += ft_putchar_i(c);
		return (ft_left_align(values));
	}
	return (ft_putchar_i(c));
}
