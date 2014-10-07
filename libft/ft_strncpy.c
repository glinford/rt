/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jquilez <jquilez@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/20 11:10:19 by jquilez           #+#    #+#             */
/*   Updated: 2013/12/18 12:12:01 by jquilez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_strncpy(char *s1, const char *s2, size_t n)
{
	size_t	count;

	count = 0;
	while (n != 0 && *((char *)s2 + count) != '\0')
	{
		*((char *)s1 + count) = *((char *)s2 + count);
		count++;
		n--;
	}
	while (n != 0)
	{
		*((char *)s1 + count) = '\0';
		count++;
		n--;
	}
	return (s1);
}
