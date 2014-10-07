/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jquilez <jquilez@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/19 16:53:27 by jquilez           #+#    #+#             */
/*   Updated: 2013/12/18 11:48:12 by jquilez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void		*ft_memccpy(void *s1, const void *s2, int c, size_t n)
{
	size_t	count;

	count = 0;
	while (n != 0)
	{
		*((unsigned char *)s1 + count) = *((unsigned char *)s2 + count);
		if (*((unsigned char *)s2 + count) == (unsigned char)c)
		{
			return (s1 + count + 1);
		}
		count++;
		n--;
	}
	return (NULL);
}
