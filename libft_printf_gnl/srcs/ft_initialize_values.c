/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_initialize_values.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msobral- <msobral-@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/10 12:29:44 by msobral-          #+#    #+#             */
/*   Updated: 2025/12/15 16:45:13 by msobral-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft_printf.h"

t_print	*ft_initialize_values(t_print *values)
{
	values->width = 0;
	values->precision = 0;
	values->prec_dot = 0;
	values->dash = 0;
	values->zero = 0;
	values->sp = 0;
	values->sign = 0;
	values->alt = 0;
	values->is_zero = 0;
	values->printed = 0;
	values->type = '\0';
	values->roll_back = 0;
	return (values);
}
