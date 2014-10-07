/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jquilez <jquilez@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/20 14:48:38 by jquilez           #+#    #+#             */
/*   Updated: 2013/12/18 12:10:38 by jquilez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t		ft_strlcat(char *dst, const char *src, size_t size)
{
	int		count;
	int		count2;
	size_t	len;

	count = 0;
	count2 = 0;
	if (dst && src)
	{
		len = ft_strlen(dst) + ft_strlen(src);
		if (size < ft_strlen(dst) + 1)
			return (ft_strlen(src) + size);
		size = size - (ft_strlen(dst) + 1);
		count = ft_strlen(dst);
		while (size != 0 && *((char *)src + count2) != '\0')
		{
			*((char *)dst + count) = *((char *)src + count2);
			count++;
			count2++;
			size--;
		}
		*((char *)dst + count) = '\0';
		return (len);
	}
	return (0);
}
