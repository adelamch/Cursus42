/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amolina- <amolina-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/16 20:45:24 by amolina-          #+#    #+#             */
/*   Updated: 2021/03/11 21:28:47 by amolina-         ###   ########.fr       */
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
			a++;
		a++;
		b++;
	}
	tab = (char **)malloc(b * sizeof(char *));
	a = 0;
	while (str[a] != '\0')
	{
		b = a;
		while (str[a] != t)
			a++;
		tab[k] = (char *)malloc ((a - b) * sizeof(char) + 1);
		a++;
		k++;
	}
}

char	**to_table(char **tab, char *str, char t)
{
	int i;
	int j;
	int k;
	
	i = 0;
	j = 0;
	k = 0;
	while (i < ft_strlen(str))
	{
		while (str[i] != t && str[i] != '\0')
		{
			tab[j][k] = str[i];
			i++;
			k++;
		}
		tab[j][k] = '\0';
		i++;
		j++;
		k = 0;
	}
	return (tab);
}

char	**ft_split(char const *s, char c)
{
	int		i;
	char	**table;

	i = 0;
	malloqueando(table, s, c, i);
	to_table(table, s, c);
	return (table);
}
