/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msobral- <msobral-@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/23 11:57:00 by msobral-          #+#    #+#             */
/*   Updated: 2025/12/15 16:45:58 by msobral-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft_printf.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new_head;
	t_list	*new_tail;

	if (!lst || !f || !del)
		return (NULL);
	new_head = ft_lstnew(f(lst->content));
	if (!new_head)
	{
		ft_lstdelone(new_head, del);
		return (NULL);
	}
	lst = lst->next;
	while (lst != NULL)
	{
		new_tail = ft_lstnew(f(lst->content));
		if (!new_tail)
		{
			ft_lstclear(&new_head, del);
			return (NULL);
		}
		ft_lstadd_back(&new_head, new_tail);
		lst = lst->next;
	}
	return (new_head);
}
