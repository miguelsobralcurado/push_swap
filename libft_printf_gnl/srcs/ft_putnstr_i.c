/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnstr_i.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msobral- <msobral-@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/08 10:55:38 by msobral-          #+#    #+#             */
/*   Updated: 2025/12/15 16:47:14 by msobral-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft_printf.h"

int	ft_putnstr_i(char *s, int n)
{
	int	i;

	if (!s)
		return (0);
	i = 0;
	while (i < n)
		write(1, &s[i++], 1);
	return (i);
}
