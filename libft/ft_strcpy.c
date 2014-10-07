/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jquilez <jquilez@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/19 11:23:25 by jquilez           #+#    #+#             */
/*   Updated: 2013/12/18 11:52:55 by jquilez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_strcpy(char *s1, const char *s2)
{
	size_t	count;

	count = 0;
	while (*((char *)s2 + count) != '\0')
	{
		*((char *)s1 + count) = *((char *)s2 + count);
		count++;
	}
	*((char *)s1 + count) = '\0';
	return (s1);
}
