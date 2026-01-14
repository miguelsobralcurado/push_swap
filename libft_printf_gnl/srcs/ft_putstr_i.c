/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_i.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msobral- <msobral-@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/01 23:38:39 by msobral-          #+#    #+#             */
/*   Updated: 2025/12/15 16:47:18 by msobral-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft_printf.h"

int	ft_putstr_i(char *s)
{
	int	i;

	if (!s)
	{
		write(1, "(null)", 6);
		return (-1);
	}
	i = 0;
	while (s[i])
		write(1, &s[i++], 1);
	return (i);
}
