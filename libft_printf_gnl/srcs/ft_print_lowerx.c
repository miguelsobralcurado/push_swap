/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_lowerx.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msobral- <msobral-@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/06 13:38:07 by msobral-          #+#    #+#             */
/*   Updated: 2025/12/15 16:46:24 by msobral-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft_printf.h"

static int	ft_noprec_x(t_print *values)
{
	ft_update_values(values, 0);
	return (ft_left_align(values));
}

int	ft_print_lowerx(t_print *values)
{
	unsigned int	x;

	x = va_arg(values->ap, unsigned int);
	values->type = 'x';
	if (x == 0 && values->prec_dot && values->precision <= 0)
		return (ft_noprec_x(values));
	if (x == 0)
		values->alt = 0;
	ft_update_values(values, ft_countui_base(x, 16));
	if (values->width && !values->dash)
	{
		values->printed += ft_right_align(values);
		values->printed += ft_put_precision(values);
		return (ft_putui_base_i(x, "0123456789abcdef"));
	}
	if (values->width && values->dash)
	{
		values->printed += ft_put_precision(values);
		values->printed += ft_putui_base_i(x, "0123456789abcdef");
		return (ft_left_align(values));
	}
	values->printed += ft_put_precision(values);
	return (ft_putui_base_i(x, "0123456789abcdef"));
}
