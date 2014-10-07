/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdel.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jquilez <jquilez@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/26 14:32:32 by jquilez           #+#    #+#             */
/*   Updated: 2014/03/27 13:48:03 by glinford         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void		ft_lstdel(t_list **alst, void (*del) (void *, size_t))
{
	t_list	*next;

	if (alst)
	{
		while (*alst != NULL)
		{
			next = (*alst)->next;
			del((*alst)->content, (*alst)->content_size);
			ft_memdel((void **)alst);
			*alst = next;
		}
	}
}
