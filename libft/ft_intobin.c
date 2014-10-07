/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_intobin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jquilez <jquilez@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/02/08 09:43:37 by jquilez           #+#    #+#             */
/*   Updated: 2014/03/27 13:47:49 by glinford         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int			*ft_intobin(int c)
{
	int		*bin;
	int		count;

	count = 7;
	bin = (int *)malloc(sizeof(int) * 8);
	if (!bin)
		return (NULL);
	if (c)
	{
		while (count != 0)
		{
			bin[count] = c % 2;
			c = c / 2;
			count--;
		}
	}
	return (bin);
}
