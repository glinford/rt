/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glinford <glinford@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/03/27 13:49:48 by glinford          #+#    #+#             */
/*   Updated: 2014/03/27 13:49:50 by glinford         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_strrchr(const char *s, int c)
{
	int		count;

	count = ft_strlen(s);
	while (count != 0 && *(s + count) != (char)c)
	{
		count--;
	}
	if (*(s + count) == (char)c)
	{
		return ((char *)s + count);
	}
	return (NULL);
}
