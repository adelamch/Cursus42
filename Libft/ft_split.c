/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amolina- <amolina-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/16 20:45:24 by amolina-          #+#    #+#             */
/*   Updated: 2021/04/11 16:56:42 by amolina-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	num_parts(char const *str, char t)
{
	size_t	i;
	size_t	parts;

	if (!str)
		return (0);
	i = 0;
	parts = 0;
	if (str[0] != t)
		parts++;
	while (str[i])
	{
		if (str[i] == t && str[i + 1] && str[i + 1] != t)
			parts++;
		i++;
	}
	return (parts);
}

size_t	part_len(char const *str, char t)
{
	size_t	i;

	i = 0;
	while (*str && *str != t)
	{
		str++;
		i++;
	}
	return (i);
}

char	*malloqueando(char **tab, int n, char const *str, char t)
{
	tab[n] = (char *)malloc(sizeof(char) * (part_len(str, t) + 1));
	if (!tab[n])
		return (NULL);
	return (tab[n]);
}

char	**ft_split(char const *s, char c)
{
	size_t	i;
	size_t	j;
	char	**table;

	i = 0;
	table = (char **)malloc(sizeof(char *) * (num_parts(s, c) + 1));
	if (!table || !s)
		return (NULL);
	while (*s)
	{
		if (*s != c)
		{
			j = 0;
			if (!malloqueando(table, i, s, c))
				return (NULL);
			while (*s && *s != c)
				table[i][j++] = *s++;
			table[i][j++] = '\0';
			i++;
		}
		else
			s++;
	}
	table[i] = NULL;
	return (table);
}
