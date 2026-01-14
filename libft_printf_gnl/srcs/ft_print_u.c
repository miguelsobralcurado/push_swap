/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_u.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msobral- <msobral-@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/06 13:35:52 by msobral-          #+#    #+#             */
/*   Updated: 2025/12/15 16:46:50 by msobral-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft_printf.h"

static int	ft_noprec_u(t_print *values)
{
	ft_update_values(values, 0);
	return (ft_left_align(values));
}

int	ft_print_u(t_print *values)
{
	unsigned int	u;

	u = va_arg(values->ap, unsigned int);
	values->type = 'u';
	if (u == 0 && values->prec_dot && values->precision <= 0)
		return (ft_noprec_u(values));
	ft_update_values(values, ft_countui_base(u, 10));
	if (values->width && !values->dash)
	{
		values->printed += ft_right_align(values);
		values->printed += ft_put_precision(values);
		return (ft_putui_i(u));
	}
	if (values->width && values->dash)
	{
		values->printed += ft_put_precision(values);
		values->printed += ft_putui_i(u);
		return (ft_left_align(values));
	}
	values->printed += ft_put_precision(values);
	return (ft_putui_i(u));
}
