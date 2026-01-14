/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msobral- <msobral-@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/21 12:07:19 by msobral-          #+#    #+#             */
/*   Updated: 2025/12/15 16:45:35 by msobral-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft_printf.h"

static size_t	countnbr(int n)
{
	size_t	count;

	if (n == -2147483648)
		return (11);
	count = 0;
	if (n < 0)
	{
		n = -n;
		count++;
	}
	while (n >= 10)
	{
		n /= 10;
		count++;
	}
	if (n >= 0)
		count++;
	return (count);
}

static void	ft_numstr(char *s, int n, size_t digits)
{
	size_t	i;

	if (n == -2147483648)
	{
		ft_memcpy(s, "-2147483648", digits);
		s[digits] = '\0';
		return ;
	}
	if (n < 0)
	{
		s[0] = '-';
		n = -n;
	}
	i = digits - 1;
	while (n >= 10)
	{
		s[i--] = (n % 10) + '0';
		n /= 10;
	}
	if (n >= 0)
		s[i] = n + '0';
	s[digits] = '\0';
}

char	*ft_itoa(int n)
{
	char	*temp;
	size_t	digit_count;

	digit_count = countnbr(n);
	temp = malloc(sizeof(char) * (digit_count + 1));
	if (!temp)
		return (NULL);
	ft_numstr(temp, n, digit_count);
	return (temp);
}
