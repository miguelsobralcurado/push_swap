/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_flag_width_count.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msobral- <msobral-@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/04 11:14:35 by msobral-          #+#    #+#             */
/*   Updated: 2025/12/15 16:45:07 by msobral-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft_printf.h"

size_t	ft_flag_width_count(const char *format, t_print *values)
{
	size_t	i;

	i = 0;
	if (values->roll_back)
	{
		return (values->roll_back - 2);
	}
	while (!ft_isalpha(format[i]) && format[i] != '%')
		i++;
	return (i);
}
