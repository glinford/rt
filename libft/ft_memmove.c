/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jquilez <jquilez@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/19 18:30:28 by jquilez           #+#    #+#             */
/*   Updated: 2013/12/18 11:18:32 by jquilez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *s1, const void *s2, size_t n)
{
	int	count;

	if (s1 <= s2)
	{
		count = 0;
		while (n != 0)
		{
			*((char *)s1 + count) = *((char *)s2 + count);
			count++;
			n--;
		}
		return (s1);
	}
	else
	{
		count = n - 1;
		while (count >= 0)
		{
			*((char *)s1 + count) = *((char *)s2 + count);
			count--;
		}
		return (s1);
	}
}
