/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jquilez <jquilez@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/12/21 19:19:10 by jquilez           #+#    #+#             */
/*   Updated: 2013/12/21 19:19:31 by jquilez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char				*ft_strmap(char const *s, char (*f) (char))
{
	unsigned int	i;
	char			*str;

	i = 0;
	if (s != NULL && f != NULL)
	{
		str = (char *)malloc(sizeof(char *) * ft_strlen(s) + 1);
		if (str == NULL)
			return (NULL);
		while (s[i] != '\0')
		{
			str[i] = f(s[i]);
			i++;
		}
		str[i] = '\0';
		return (str);
	}
	return (NULL);
}
