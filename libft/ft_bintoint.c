/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bintoint.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jquilez <jquilez@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/02/08 10:16:38 by jquilez           #+#    #+#             */
/*   Updated: 2014/02/11 11:54:09 by jquilez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int				ft_bintoint(int *bin)
{
	int		i;
	int		res;
	int		nb;

	i = 0;
	res = 0;
	nb = 128;
	while (i < 8)
	{
		if (bin[i])
			res = res + nb;
		i++;
		nb /= 2;
	}
	return (res);
}
