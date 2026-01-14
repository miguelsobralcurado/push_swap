/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_roll_back.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msobral- <msobral-@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/10 13:24:32 by msobral-          #+#    #+#             */
/*   Updated: 2025/12/15 16:47:29 by msobral-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft_printf.h"

static int	ft_rollback_nstr_i(char *s, int n, t_print *values)
{
	int	i;

	if (!s)
		return (0);
	i = 0;
	while (i < n)
	{
		write(1, &s[i], 1);
		if (s[i] == '.' && s[i + 1] == '-')
			values->printed += write(1, "0", 1);
		i++;
	}
	return (i);
}

static int	ft_roll_back2(const char *format, t_print *values, int i)
{
	if (format && values->width)
	{
		while (format && ft_isdigit(*format))
		{
			format--;
			i++;
		}
	}
	while (format && *format != '%')
	{
		format--;
		i++;
	}
	if (!format)
	{
		format++;
		i--;
	}
	values->roll_back = i;
	return (ft_rollback_nstr_i((char *)format, i, values));
}

int	ft_roll_back(const char *format, t_print *values)
{
	int	i;

	i = 0;
	if (format && values->precision)
	{
		while (format && ft_isdigit(*format))
		{
			format--;
			i++;
		}
	}
	if (format && values->prec_dot)
	{
		format--;
		i++;
	}
	return (ft_roll_back2(format, values, i));
}
