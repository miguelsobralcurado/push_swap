/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_update_values.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msobral- <msobral-@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/06 19:28:44 by msobral-          #+#    #+#             */
/*   Updated: 2025/12/15 16:48:10 by msobral-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft_printf.h"

static t_print	*ft_update_s_precision(t_print *values, int len)
{
	if (values->prec_dot && values->precision > len)
		values->precision = len;
	else if (!values->prec_dot && values->precision <= 0)
		values->precision = len;
	if (values->width > values->precision)
		values->width -= values->precision;
	else
		values->width = 0;
	return (values);
}

static t_print	*ft_update_precision(t_print *values, int len)
{
	if (values->sign == 2)
		len -= 1;
	if (values->type == 'd' || values->type == 'i'
		|| values->type == 'u' || values->type == 'x' || values->type == 'X')
	{
		values->zero = 0;
		if (values->precision > len)
			values->precision -= len;
		else
			values->precision = 0;
		if (values->width > values->precision + len)
			values->width -= values->precision + len;
		else
			values->width = 0;
	}
	if ((values->type == 'i' || values->type == 'd')
		&& (values->sign || values->sp))
		values->width -= 1;
	return (values);
}

t_print	*ft_update_values(t_print *values, int len)
{
	if (values->prec_dot && (values->type == 'd' || values->type == 'i'
			|| values->type == 'u' || values->type == 'x'
			|| values->type == 'X'))
		return (ft_update_precision(values, len));
	if (values->type == 's')
		return (ft_update_s_precision(values, len));
	if (values->width >= len)
		values->width -= len;
	else
		values->width = 0;
	return (values);
}
