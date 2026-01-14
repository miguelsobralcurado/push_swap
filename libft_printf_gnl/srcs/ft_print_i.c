/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_i.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msobral- <msobral-@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/06 13:30:50 by msobral-          #+#    #+#             */
/*   Updated: 2025/12/15 16:46:19 by msobral-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft_printf.h"

static int	ft_noprec_i(t_print *values)
{
	ft_update_values(values, 0);
	return (ft_left_align(values));
}

int	ft_print_i(t_print *values)
{
	int	i;

	i = va_arg(values->ap, int);
	values->type = 'i';
	if (i == 0 && values->prec_dot && values->precision <= 0)
		return (ft_noprec_i(values));
	if (i < 0)
		values->sign = 2;
	ft_update_values(values, ft_countnbr_base(i, 10));
	if (values->width && !values->dash)
	{
		values->printed += ft_right_align(values);
		values->printed += ft_put_precision(values);
		return (ft_putnbr_i(i));
	}
	if (values->width && values->dash)
	{
		values->printed += ft_put_precision(values);
		values->printed += ft_putnbr_i(i);
		return (ft_left_align(values));
	}
	if (values->sign && values->zero && !values->precision)
		values->printed += ft_right_align(values);
	values->printed += ft_put_precision(values);
	return (ft_putnbr_i(i));
}
