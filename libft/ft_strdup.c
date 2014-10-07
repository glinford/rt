/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jquilez <jquilez@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/20 10:39:53 by jquilez           #+#    #+#             */
/*   Updated: 2013/12/18 11:53:24 by jquilez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_strdup(const char *s1)
{
	char	*s2;
	int		count;

	count = 0;
	s2 = (char *)malloc(sizeof(char) * ft_strlen(s1) + 1);
	if (s2 == NULL)
	{
		return (NULL);
	}
	while (*((char *)s1 + count) != '\0')
	{
		*(s2 + count) = *((char *)s1 + count);
		count++;
	}
	*(s2 + count) = '\0';
	return (s2);
}
