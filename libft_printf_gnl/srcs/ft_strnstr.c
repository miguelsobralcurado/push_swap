/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msobral- <msobral-@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/15 15:59:29 by msobral-          #+#    #+#             */
/*   Updated: 2025/12/15 16:47:55 by msobral-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft_printf.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	size_t	j;

	if (little[0] == '\0')
		return ((char *)big);
	i = 0;
	while (i < len && big[i])
	{
		j = 0;
		if (big[i] == little[0])
		{
			while (i + j < len && big[i + j] && little[j]
				&& big[i + j] == little[j])
			{
				if (little[j + 1] == '\0')
					return ((char *)(big + i));
				j++;
			}
		}
		i++;
	}
	return (NULL);
}
