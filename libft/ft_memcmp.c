/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jquilez <jquilez@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/20 09:29:47 by jquilez           #+#    #+#             */
/*   Updated: 2014/03/27 13:48:17 by glinford         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int					ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char	a;
	unsigned char	b;
	size_t			count;

	count = 0;
	while (n != 0)
	{
		a = *((unsigned char *)s1 + count);
		b = *((unsigned char *)s2 + count);
		if (a != b)
		{
			return ((int)a - (int)b);
		}
		count++;
		n--;
	}
	return (0);
}
