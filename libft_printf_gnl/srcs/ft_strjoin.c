/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msobral- <msobral-@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/21 11:34:52 by msobral-          #+#    #+#             */
/*   Updated: 2025/12/15 16:47:42 by msobral-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft_printf.h"

char	*ft_strjoin(const char *s1, const char *s2)
{
	size_t	len;
	char	*temp;

	if (!s1)
		return (ft_strdup(s2));
	else if (!s2)
		return (ft_strdup(s1));
	len = ft_strlen(s1) + ft_strlen(s2);
	temp = malloc(sizeof(char) * (len + 1));
	if (!temp)
		return (NULL);
	ft_memcpy(temp, s1, ft_strlen(s1));
	ft_memcpy(temp + ft_strlen(s1), s2, ft_strlen(s2));
	temp[len] = '\0';
	return (temp);
}
