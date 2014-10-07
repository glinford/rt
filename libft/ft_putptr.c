/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putptr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jquilez <jquilez@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/12/20 12:32:15 by jquilez           #+#    #+#             */
/*   Updated: 2013/12/20 12:34:01 by jquilez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void		ft_puthex(unsigned long ptr)
{
	if (ptr >= 16)
	{
		ft_puthex(ptr / 16);
		ft_puthex(ptr % 16);
	}
	else
	{
		if (ptr < 10)
			ft_putchar(48 + ptr);
		else
			ft_putchar(87 + ptr);
	}
}

void			ft_putptr(unsigned long ptr)
{
	ft_putstr("0x");
	ft_puthex(ptr);
}
