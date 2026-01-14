/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putul_base_i.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msobral- <msobral-@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/31 22:05:27 by msobral-          #+#    #+#             */
/*   Updated: 2025/12/15 16:47:25 by msobral-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft_printf.h"

static int	check_base(char *base)
{
	int	i;
	int	j;

	if (ft_strlen(base) < 2)
		return (0);
	i = 0;
	while (base[i])
	{
		if (base[i] == '+' || base[i] == '-' || base[i] < 32 || base[i] > 126)
			return (0);
		j = 0;
		while (base[j])
		{
			if (base[j] == base[i] && j != i)
				return (0);
			j++;
		}
		i++;
	}
	return (1);
}

int	ft_putul_base_i(unsigned long n, char *base)
{
	size_t	base_len;
	int		count;

	count = 0;
	if (!check_base(base))
		return (count);
	base_len = ft_strlen(base);
	if (n >= base_len)
	{
		count += ft_putul_base_i(n / base_len, base);
		count += ft_putul_base_i(n % base_len, base);
	}
	else if (n < base_len)
		count += ft_putchar_i(base[n]);
	return (count);
}
