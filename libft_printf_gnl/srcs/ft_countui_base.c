/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_countui_base.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msobral- <msobral-@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/04 11:37:08 by msobral-          #+#    #+#             */
/*   Updated: 2025/12/15 16:44:37 by msobral-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft_printf.h"

size_t	ft_countui_base(unsigned int n, unsigned int base)
{
	size_t	count;

	count = 0;
	while (n >= base)
	{
		n /= base;
		count++;
	}
	if (n < base)
		count++;
	return (count);
}
