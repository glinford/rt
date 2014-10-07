/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tabdel.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jquilez <jquilez@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/12/19 10:16:38 by jquilez           #+#    #+#             */
/*   Updated: 2013/12/19 10:16:52 by jquilez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void		ft_tabdel(char **tab)
{
	int		count;

	count = 0;
	while (tab[count])
	{
		ft_strdel(&tab[count]);
		count++;
	}
	free(tab);
}
