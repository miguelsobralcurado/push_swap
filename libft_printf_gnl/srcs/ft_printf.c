/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msobral- <msobral-@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/31 14:41:37 by msobral-          #+#    #+#             */
/*   Updated: 2025/12/15 16:46:55 by msobral-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft_printf.h"

int	ft_specifier_check(const char *format, t_print *values)
{
	if (*format == 'c')
		return (ft_print_c(values));
	if (*format == 's')
		return (ft_print_s(values));
	if (*format == 'p')
		return (ft_print_p(values));
	if (*format == 'd' || *format == 'i')
		return (ft_print_i(values));
	if (*format == 'u')
		return (ft_print_u(values));
	if (*format == 'x')
		return (ft_print_lowerx(values));
	if (*format == 'X')
		return (ft_print_upperx(values));
	if (*format == '%')
		return (ft_putchar_i('%'));
	else
		return (ft_roll_back(format, values));
}

static int	ft_precision_parse(const char *format, t_print *values)
{
	if (*format == '.')
	{
		values->prec_dot = 1;
		format++;
		if (!ft_isdigit(*format))
			values->precision = -1;
		if (format && ft_isdigit(*format))
			values->precision = ft_atoi(format);
		while (format && ft_isdigit(*format))
			format++;
	}
	return (ft_specifier_check(format, values));
}

static int	ft_width_parse(const char *format, t_print *values)
{
	if (ft_isdigit(*format))
	{
		values->width = ft_atoi(format);
		while (format && ft_isdigit(*format))
			format++;
	}
	if (*format == '.')
		return (ft_precision_parse(format, values));
	return (ft_specifier_check(format, values));
}

int	ft_flag_check(const char *format, t_print *values)
{
	while (format && (*format == '-' || *format == '0'
			|| *format == ' ' || *format == '+' || *format == '#'))
	{
		if (*format == '-')
			values->dash = 1;
		if (*format == '0')
			values->zero = 1;
		if (*format == ' ')
			values->sp = 1;
		if (*format == '+')
			values->sign = 1;
		if (*format == '#')
			values->alt = 1;
		format++;
	}
	if (!format)
		return (ft_putstr_i(""));
	if (ft_isdigit(*format) && *format != '0')
		return (ft_width_parse(format, values));
	if (*format == '.')
		return (ft_precision_parse(format, values));
	return (ft_specifier_check(format, values));
}

int	ft_printf(const char *format, ...)
{
	t_print	*values;
	int		ret;

	if (!format)
		return (-1);
	values = (t_print *)malloc(sizeof(t_print));
	if (!values)
		return (-1);
	va_start(values->ap, format);
	ret = 0;
	while (*format)
	{
		if (*format == '%')
		{
			if (!*++format)
				return (va_end(values->ap), free(values), -1);
			ft_initialize_values(values);
			ret += ft_flag_check(format, values) + values->printed;
			format += ft_flag_width_count(format, values) + 1;
		}
		else
			ret += ft_putchar_i(*format++);
	}
	va_end(values->ap);
	return (free(values), ret);
}
