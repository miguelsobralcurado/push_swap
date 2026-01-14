/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_p.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msobral- <msobral-@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/06 12:41:38 by msobral-          #+#    #+#             */
/*   Updated: 2025/12/15 16:46:28 by msobral-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft_printf.h"

static int	ft_print_null_p(t_print *values)
{
	ft_update_values(values, ft_strlen("(nil)"));
	if (values->width && !values->dash)
	{
		values->printed += ft_right_align(values);
		return (ft_putstr_i("(nil)"));
	}
	if (values->width && values->dash)
	{
		values->printed += ft_putstr_i("(nil)");
		return (ft_left_align(values));
	}
	return (ft_putstr_i("(nil)"));
}

int	ft_print_p(t_print *values)
{
	unsigned long	p;

	p = (unsigned long)va_arg(values->ap, void *);
	values->type = 'p';
	if (!p)
		return (ft_print_null_p(values));
	ft_update_values(values, ft_countul_base(p, 16) + 2);
	if (values->width && !values->dash)
	{
		values->printed += ft_right_align(values);
		values->printed += ft_putstr_i("0x");
		return (ft_putul_base_i(p, "0123456789abcdef"));
	}
	if (values->width && values->dash)
	{
		values->printed += ft_putstr_i("0x");
		values->printed += ft_putul_base_i(p, "0123456789abcdef");
		return (ft_left_align(values));
	}
	values->printed += ft_putstr_i("0x");
	return (ft_putul_base_i(p, "0123456789abcdef"));
}
