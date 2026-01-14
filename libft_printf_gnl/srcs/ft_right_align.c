/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_right_align.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msobral- <msobral-@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/06 19:30:48 by msobral-          #+#    #+#             */
/*   Updated: 2025/12/15 16:47:27 by msobral-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft_printf.h"

static int	unsigned_align(t_print *values)
{
	if (!(values->precision) && values->zero)
		return (ft_putnchar_i('0', values->width));
	else
		return (ft_putnchar_i(' ', values->width));
}

static int	alt_align(t_print *values)
{
	if (values->type == 'x')
	{
		if (values->alt && !(values->precision) && values->zero)
			return (ft_putstr_i("0x") + ft_putnchar_i('0', values->width - 2));
		else if (values->alt && !values->zero)
			return (ft_putnchar_i(' ', values->width - 2));
	}
	else if (values->type == 'X')
	{
		if (values->alt && !(values->precision) && values->zero)
			return (ft_putstr_i("0X") + ft_putnchar_i('0', values->width - 2));
		else if (values->alt && !values->zero)
			return (ft_putnchar_i(' ', values->width - 2));
	}
	return (unsigned_align(values));
}

static int	signed_align(t_print *values)
{
	if (!(values->precision) && values->zero)
	{
		if (values->sign == 1)
			return (ft_putchar_i('+') + ft_putnchar_i('0', values->width - 1));
		else if (values->sign == 2)
			return (ft_putchar_i('-') + ft_putnchar_i('0', values->width));
		else if (!(values->sign) && values->sp)
			return (ft_putchar_i(' ') + ft_putnchar_i('0', values->width - 1));
		else
			return (ft_putnchar_i('0', values->width));
	}
	return (ft_putnchar_i(' ', values->width));
}

int	ft_right_align(t_print *values)
{
	if (values->type == 'd' || values->type == 'i')
		return (signed_align(values));
	else if (values->type == 'u')
		return (unsigned_align(values));
	else if (values->type == 'x' || values->type == 'X')
		return (alt_align(values));
	else
		return (ft_putnchar_i(' ', values->width));
}
