/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jquilez <jquilez@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/26 15:16:21 by jquilez           #+#    #+#             */
/*   Updated: 2013/12/18 11:47:28 by jquilez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list		*ft_lstmap(t_list *lst, t_list *(*f) (t_list *elem))
{
	t_list	*new;
	t_list	*new2;

	new2 = NULL;
	if (lst)
	{
		new = ft_lstnew(lst->content, lst->content_size);
		new = f(new);
		if (new == NULL)
			return (NULL);
		new2 = new;
		lst = lst->next;
		while (lst != NULL)
		{
			new->next = ft_lstnew(lst->content, lst->content_size);
			if (new->next == NULL)
				return (NULL);
			new->next = f(new->next);
			lst = lst->next;
			new = new->next;
		}
	}
	return (new2);
}
