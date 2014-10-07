/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jquilez <jquilez@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/20 15:49:01 by jquilez           #+#    #+#             */
/*   Updated: 2014/03/21 10:38:08 by jquilez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_strchr(const char *s, int c)
{
	while (*s != '\0' && *s != (const char)c)
	{
		s++;
	}
	if (*s == (const char)c)
	{
		return ((char *)s);
	}
	return (NULL);
}
