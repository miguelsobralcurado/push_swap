/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msobral- <msobral-@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/18 19:57:08 by msobral-          #+#    #+#             */
/*   Updated: 2026/02/23 11:27:13 by msobral-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft_printf.h"

int	ft_strnchr(const char *s, char c, int n)
{
	int	i;

	if (!s)
		return (-1);
	i = 0;
	while (i < n)
	{
		if (s[i] == c)
			return (i);
		i++;
	}
	return (-1);
}
