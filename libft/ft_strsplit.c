/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jquilez <jquilez@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/22 10:39:50 by jquilez           #+#    #+#             */
/*   Updated: 2013/12/18 12:44:24 by jquilez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int			ft_malsplit_str(char const *s, char c)
{
	int				i;

	i = 0;
	while (s[i] != c && s[i] != '\0')
	{
		i++;
	}
	return (i);
}

static int			ft_malsplit(char const *s, char c)
{
	int				i;
	int				j;

	i = 0;
	j = 0;
	while (s[j] != '\0')
	{
		while (s[j] == c && s[j] != '\0')
		{
			j++;
		}
		if (s[j] != c && s[j] != '\0')
			i++;
		while (s[j] != c && s[j] != '\0')
		{
			j++;
		}
	}
	return (i);
}

static char const	*ft_str_c(char const *s, char c)
{
	while (*s == c && *s != '\0')
		s++;
	return (s);
}

char				**ft_strsplit(char const *s, char c)
{
	char			**st;
	int				i[2];

	i[0] = 0;
	if (s == NULL)
		return (NULL);
	st = (char **)malloc(sizeof(char *) * ft_malsplit(s, c) + 1);
	if (st == NULL)
		return (NULL);
	while (*s != '\0')
	{
		i[1] = 0;
		s = ft_str_c(s, c);
		if (*s != '\0')
		{
			st[i[0]] = (char *)malloc(sizeof(char) * ft_malsplit_str(s, c) + 1);
			if (st[i[0]] == NULL)
				return (NULL);
			while (*s != c && *s != '\0')
				st[i[0]][i[1]++] = *(s++);
			st[i[0]++][i[1]] = '\0';
		}
	}
	st[i[0]] = NULL;
	return (st);
}
