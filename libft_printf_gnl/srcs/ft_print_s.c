/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_s.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msobral- <msobral-@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/06 12:33:37 by msobral-          #+#    #+#             */
/*   Updated: 2025/12/15 16:46:45 by msobral-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft_printf.h"

static int	ft_noprec_s(t_print *values)
{
	return (ft_putnchar_i(' ', values->width));
}

int	ft_print_s(t_print *values)
{
	char	*s;

	s = va_arg(values->ap, char *);
	if (!s && values->prec_dot && (values->precision < 0
			|| values->precision < (int)ft_strlen("(null)")))
		return (ft_noprec_s(values));
	if (s && (!ft_strlen(s) || values->precision < 0))
		return (ft_noprec_s(values));
	if (!s)
		s = "(null)";
	values->type = 's';
	ft_update_values(values, ft_strlen(s));
	if (values->width && !values->dash)
	{
		values->printed += ft_right_align(values);
		return (ft_putnstr_i(s, values->precision));
	}
	if (values->width && values->dash)
	{
		values->printed += ft_putnstr_i(s, values->precision);
		return (ft_left_align(values));
	}
	return (ft_putnstr_i(s, values->precision));
}
