/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jquilez <jquilez@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/20 11:24:28 by jquilez           #+#    #+#             */
/*   Updated: 2013/11/22 17:47:36 by jquilez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strcat(char *s1, const char *s2)
{
	int	count;
	int	count2;

	count = 0;
	count2 = 0;
	while (*((char *)s1 + count) != '\0')
	{
		count++;
	}
	while (*((char *)s2 + count2) != '\0')
	{
		*((char *)s1 + count) = *((char *)s2 + count2);
		count++;
		count2++;
	}
	*((char *)s1 + count) = '\0';
	return (s1);
}
