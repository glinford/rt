/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jquilez <jquilez@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/20 16:56:38 by jquilez           #+#    #+#             */
/*   Updated: 2013/12/18 11:26:08 by jquilez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_strstr(const char *s1, const char *s2)
{
	char	*s3;

	if (!*s2)
		return ((char *)s1);
	while (*s1 != '\0')
	{
		s3 = (char *)s2;
		if (*s1 == *s2)
		{
			while (*s2 != '\0' && *s1 == *s2)
			{
				s1++;
				s2++;
			}
			if (*s2 == '\0')
			{
				s1 = s1 - ft_strlen(s3);
				return ((char *)s1);
			}
		}
		s2 = s3;
		s1++;
	}
	return (NULL);
}
