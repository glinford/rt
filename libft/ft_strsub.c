/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jquilez <jquilez@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/12/21 19:21:59 by jquilez           #+#    #+#             */
/*   Updated: 2013/12/21 19:22:11 by jquilez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_strsub(char const *s, unsigned int start, size_t len)
{
	char	*str;
	int		count;

	if (s != NULL)
	{
		str = (char *)malloc(sizeof(char *) * len + 1);
		count = 0;
		if (str == NULL)
			return (NULL);
		while (s[start] != '\0' && len != 0)
		{
			str[count] = s[start];
			count++;
			start++;
			len--;
		}
		str[count] = '\0';
		return (str);
	}
	return (NULL);
}
