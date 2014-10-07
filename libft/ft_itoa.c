/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jquilez <jquilez@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/21 17:32:22 by jquilez           #+#    #+#             */
/*   Updated: 2013/12/19 15:36:04 by jquilez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_itoa(int n)
{
	int		count;
	int		signe;
	char	*result;

	count = ft_intlen(n);
	signe = 1;
	if (!n)
		return (ft_strdup("0"));
	if (n < 0)
	{
		signe = -1;
		result = (char *)malloc(sizeof(char) * ft_intlen(n) + 2);
		count++;
		result[0] = '-';
	}
	else
		result = (char *)malloc(sizeof(char) * ft_intlen(n) + 1);
	result[count] = '\0';
	while (n != 0)
	{
		result[count - 1] = (n % 10) * signe + 48;
		n = n / 10;
		count--;
	}
	return (result);
}
