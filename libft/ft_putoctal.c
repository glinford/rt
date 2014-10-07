/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putoctal.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jquilez <jquilez@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/12/20 10:57:47 by jquilez           #+#    #+#             */
/*   Updated: 2013/12/20 10:58:16 by jquilez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putoctal(unsigned int n)
{
	if (n >= 8)
	{
		ft_putoctal(n / 8);
		ft_putoctal(n % 8);
	}
	else
	{
		ft_putchar(48 + n);
	}
}
