/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnchar_i.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msobral- <msobral-@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/03 16:02:03 by msobral-          #+#    #+#             */
/*   Updated: 2025/12/15 16:47:12 by msobral-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft_printf.h"

int	ft_putnchar_i(char c, int n)
{
	int	i;

	i = 0;
	while (i < n)
		i += ft_putchar_i(c);
	return (i);
}
