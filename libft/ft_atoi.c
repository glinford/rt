/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jquilez <jquilez@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/21 10:10:15 by jquilez           #+#    #+#             */
/*   Updated: 2013/12/18 11:45:04 by jquilez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_atoi(const char *str)
{
	int	result;
	int	op;

	result = 0;
	op = 1;
	while (*str == ' ' || *str == '\t' || *str == '\n' || *str == '\v'
			|| *str == '\r' || *str == '\f')
		str++;
	if (*str == 45 || *str == 43)
	{
		if (*str == 45)
			op = -1;
		str++;
	}
	while (*str != '\0' && *str <= 57 && *str >= 48)
	{
		if (*str <= '9' && *str >= '0')
			result = (result * 10) + (*str - '0');
		str++;
	}
	return (op * result);
}
