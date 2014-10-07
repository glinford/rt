/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jquilez <jquilez@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/22 15:13:19 by jquilez           #+#    #+#             */
/*   Updated: 2013/11/27 17:56:01 by jquilez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char			*ft_strtrim(char const *s)
{
	char		*str;
	int			k;
	int			j;
	int			i;

	k = 0;
	i = 0;
	if (!s)
		return (NULL);
	j = ft_strlen(s) - 1;
	while (s[k] != '\0' && (s[k] == ' ' || s[k] == '\t' || s[k] == '\n'))
		k++;
	while (j != 0 && (s[j] == ' ' || s[j] == '\t' || s[j] == '\n'))
		j--;
	if (k >= j)
		str = (char *)malloc(sizeof(char) * 1);
	else
		str = (char *)malloc(sizeof(char) * (j - k) + 2);
	if (str == NULL)
		return (NULL);
	while (k <= j)
		str[i++] = s[k++];
	str[i] = '\0';
	return (str);
}
