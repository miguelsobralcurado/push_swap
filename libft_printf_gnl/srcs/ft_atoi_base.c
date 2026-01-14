/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msobral- <msobral-@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/18 19:54:58 by msobral-          #+#    #+#             */
/*   Updated: 2025/12/18 20:06:51 by msobral-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft_printf.h"

int	ft_atoi_base(const char *str, int str_base)
{
	int	i, sign, result;
	char base[] = "0123456789abcdef";

	i = 0;
	sign = 1;
	result = 0;
	while (str[i] && ft_isspace(str[i]))
		i++;
	if (str[i] == '+' || str[i] == '-')
		if (str[i++] == '-')
			sign = -1;
	while (str[i] && ft_strnchr(base, ft_tolower(str[i]), str_base) >= 0)
		result = (result * str_base) + ft_strnchr(base, str[i++], str_base);
	return (result * sign);
}
