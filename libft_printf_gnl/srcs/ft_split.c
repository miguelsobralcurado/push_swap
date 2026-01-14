/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msobral- <msobral-@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/21 11:51:22 by msobral-          #+#    #+#             */
/*   Updated: 2025/12/15 16:47:32 by msobral-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft_printf.h"

static size_t	countwords(const char *s, char c)
{
	size_t	count;
	size_t	i;

	i = 0;
	count = 0;
	while (s[i])
	{
		while (s[i] && s[i] == c)
			i++;
		if (s[i] && s[i] != c)
		{
			while (s[i] && s[i] != c)
				i++;
			count++;
		}
	}
	return (count);
}

static void	*freeall(char **temp)
{
	int	i;

	if (!temp)
		return (NULL);
	i = 0;
	while (temp[i])
		free(temp[i++]);
	free(temp);
	return (NULL);
}

static char	**wordtostr(char **temp, const char *s, char c)
{
	unsigned int	i;
	unsigned int	j;
	unsigned int	k;

	i = 0;
	k = 0;
	while (s[i])
	{
		if (s[i] && s[i] != c)
		{
			j = i;
			while (s[j] && s[j] != c)
				j++;
			temp[k] = ft_substr(s, i, j - i);
			if (!temp[k])
				return (freeall(temp));
			k++;
			i = j;
		}
		else
			i++;
	}
	temp[k] = NULL;
	return (temp);
}

char	**ft_split(const char *s, char c)
{
	char	**temp;

	if (!s)
		return (NULL);
	temp = malloc(sizeof(char *) * (countwords(s, c) + 1));
	if (!temp)
		return (NULL);
	return (wordtostr(temp, s, c));
}
