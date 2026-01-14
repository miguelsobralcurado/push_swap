/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_countul_base.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msobral- <msobral-@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/04 11:41:26 by msobral-          #+#    #+#             */
/*   Updated: 2025/12/15 16:44:57 by msobral-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft_printf.h"

size_t	ft_countul_base(unsigned long n, unsigned long base)
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
