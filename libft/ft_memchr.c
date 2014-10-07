/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jquilez <jquilez@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/20 08:53:05 by jquilez           #+#    #+#             */
/*   Updated: 2013/12/18 11:48:28 by jquilez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void				*ft_memchr(const void *s, int c, size_t n)
{
	size_t			count;
	unsigned char	d;

	count = 0;
	d = (unsigned char)c;
	while (n != 0)
	{
		if (*((unsigned char *)s + count) == d)
		{
			return ((unsigned char *)s + count);
		}
		count++;
		n--;
	}
	return (NULL);
}
