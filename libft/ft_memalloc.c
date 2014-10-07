/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memalloc.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jquilez <jquilez@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/25 13:40:03 by jquilez           #+#    #+#             */
/*   Updated: 2014/03/27 13:52:00 by glinford         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void			*ft_memalloc(size_t size)
{
	void		*ret;
	size_t		i;

	ret = (void *)malloc(sizeof(*ret) * size);
	i = 0;
	if (ret == NULL)
		return (NULL);
	while (i < size)
	{
		*((char *)ret + i) = 0;
		i++;
	}
	return (ret);
}
