/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jquilez <jquilez@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/19 15:39:32 by jquilez           #+#    #+#             */
/*   Updated: 2013/11/22 17:42:36 by jquilez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *s1, const void *s2, size_t n)
{
	int	count;

	count = 0;
	while (n != 0)
	{
		*((char *)s1 + count) = *((char *)s2 + count);
		count++;
		n--;
	}
	return (s1);
}
