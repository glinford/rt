/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glinford <glinford@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/03/27 13:48:43 by glinford          #+#    #+#             */
/*   Updated: 2014/03/27 13:48:45 by glinford         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strncat(char *s1, const char *s2, size_t n)
{
	int	count;
	int	count2;

	count = 0;
	count2 = 0;
	while (*((char *)s1 + count) != '\0')
	{
		count++;
	}
	while (*((char *)s2 + count2) != '\0' && n != 0)
	{
		*((char *)s1 + count) = *((char *)s2 + count2);
		count++;
		count2++;
		n--;
	}
	*((char *)s1 + count) = '\0';
	return (s1);
}
