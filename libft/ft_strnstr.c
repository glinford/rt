/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glinford <glinford@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/03/27 13:50:04 by glinford          #+#    #+#             */
/*   Updated: 2014/03/27 13:50:05 by glinford         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_strnstr(const char *s1, const char *s2, size_t n)
{
	char	*s3;

	if (!*s2)
		return ((char *)s1);
	while (*s1 != '\0' && n != 0)
	{
		s3 = (char *)s2;
		if (*s1 == *s2)
		{
			while (*s2 != '\0' && *s1 == *s2 && n-- != 0)
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
		n--;
	}
	return (NULL);
}
