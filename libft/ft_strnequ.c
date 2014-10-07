/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnequ.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jquilez <jquilez@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/12/21 19:20:50 by jquilez           #+#    #+#             */
/*   Updated: 2013/12/21 19:21:01 by jquilez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_strnequ(char const *s1, char const *s2, size_t n)
{
	int	i;

	i = 0;
	if (s1 == NULL && s2 == NULL)
		return (1);
	if (s1 == NULL || s2 == NULL)
		return (0);
	while (s1[i] != '\0' && s2[i] != '\0' && n != 0)
	{
		if (s1[i] == s2[i])
		{
			i++;
			n--;
		}
		else
		{
			return (0);
		}
	}
	if (n == 0 || (s1[i] == '\0' && s2[i] == '\0'))
		return (1);
	return (0);
}
