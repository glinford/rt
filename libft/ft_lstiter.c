/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jquilez <jquilez@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/26 15:08:55 by jquilez           #+#    #+#             */
/*   Updated: 2013/12/18 11:16:44 by jquilez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void		ft_lstiter(t_list *lst, void (*f) (t_list *elem))
{
	t_list	*next;

	if (lst)
	{
		while (lst != NULL)
		{
			next = lst->next;
			f(lst);
			lst = next;
		}
	}
}
