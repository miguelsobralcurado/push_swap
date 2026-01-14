/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msobral- <msobral-@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/17 11:10:58 by msobral-          #+#    #+#             */
/*   Updated: 2025/12/17 11:24:36 by msobral-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

double ft_sqrt(double x)
{
	double	result;
	double	prev;
	int		i;

	if (x < 0.0)
		return (0.0 / 0.0);
	if (x == 0)
		return (0.0);
	i = 0;
	result = x;
	prev = 0.0;
	while (i++ < 50 && (result - prev > 1e-12 || prev - result > 1e-12))
	{
		prev = result;
		result = 0.5 * (result + x / result);
	}
	return (result);
}
