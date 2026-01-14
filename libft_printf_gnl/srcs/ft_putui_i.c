/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putui_i.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msobral- <msobral-@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/31 21:34:05 by msobral-          #+#    #+#             */
/*   Updated: 2025/12/15 16:47:23 by msobral-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft_printf.h"

int	ft_putui_i(unsigned int u)
{
	int	count;

	count = 0;
	if (u >= 10)
		count += ft_putui_i(u / 10);
	count += ft_putchar_i((u % 10) + '0');
	return (count);
}
