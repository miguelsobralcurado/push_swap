/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_put_precision.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msobral- <msobral-@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/07 15:14:04 by msobral-          #+#    #+#             */
/*   Updated: 2025/12/15 16:46:57 by msobral-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft_printf.h"

static int	alt_precision(t_print *values)
{
	if (values->alt && (values->precision || !values->zero))
	{
		if (values->type == 'x')
			return (ft_putstr_i("0x") + ft_putnchar_i('0', values->precision));
		if (values->type == 'X')
			return (ft_putstr_i("0X") + ft_putnchar_i('0', values->precision));
	}
	return (ft_putnchar_i('0', values->precision));
}

static int	signed_precision(t_print *values)
{
	if ((values->sign || values->sp) && !values->precision && values->zero)
		return (0);
	if (values->sign == 2)
		return (ft_putchar_i('-') + ft_putnchar_i('0', values->precision));
	else if (values->sign == 1)
		return (ft_putchar_i('+') + ft_putnchar_i('0', values->precision));
	else if (!(values->sign) && values->sp)
		return (ft_putchar_i(' ') + ft_putnchar_i('0', values->precision));
	else
		return (ft_putnchar_i('0', values->precision));
}

int	ft_put_precision(t_print *values)
{
	if (values->type == 'i' || values->type == 'd')
		return (signed_precision(values));
	else if (values->type == 'x' || values->type == 'X')
		return (alt_precision(values));
	else
		return (ft_putnchar_i('0', values->precision));
}
