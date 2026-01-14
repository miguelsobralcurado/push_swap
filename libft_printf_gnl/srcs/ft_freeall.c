/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_freeall.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msobral- <msobral-@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/04 14:34:29 by msobral-          #+#    #+#             */
/*   Updated: 2026/01/04 14:36:03 by msobral-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft_printf.h"

void	ft_freeall(char **temp)
{
	int	i;

	if (!temp)
		return ;
	i = 0;
	while (temp[i])
		free(temp[i++]);
	free(temp);
}
