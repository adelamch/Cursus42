/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amolina- <amolina-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/16 20:45:24 by amolina-          #+#    #+#             */
/*   Updated: 2021/03/10 21:45:35 by amolina-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

size_t	ft_strlen(const char *s)
{
	size_t i;

	i = 0;
	while (s[i] != '\0')
		i++;
	return (i);
}

void	malloqueando(char **tab, char *str, char t, int a)
{
	int b;
	int k;

	b = 0;
	k = 0;
	while (a < ft_strlen(str))
	{
		while (str[a] != t && str[a] != '\0')
		{
			a++;
		}
		a++;
		b++;
	}
	tab = (char **)malloc(b * sizeof(char *));
	a = 0;
	while (k < b)
	{
		while (str[a] != t)
		{
			a++;
		}
		tab[k] = (char *)malloc (a * sizeof(char) + 1);
		a++;
		k++;
	}
}

char **ft_split(char const *s, char c)
{
	int		i;
	char	**table;

	i = 0;
	malloqueando(table, s, c, i);
}
