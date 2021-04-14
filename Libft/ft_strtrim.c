/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amolina- <amolina-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/16 20:45:06 by amolina-          #+#    #+#             */
/*   Updated: 2021/04/09 01:21:57 by amolina-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	check(char c, const char *quit)
{
	size_t	i;

	i = 0;
	while (quit[i] != '\0')
	{
		if (quit[i] == c)
			return (1);
		i++;
	}
	return (0);
}

char	*ft_strtrim(const char *s1, const char *set)
{
	size_t	i;
	size_t	j;
	char	*cadena;

	if (!s1 || !set)
		return (NULL);
	i = 0;
	j = ft_strlen(s1) - 1;
	while (s1[i] && check(s1[i], set))
		i++;
	while (j > i && check(s1[j], set))
		j--;
	cadena = ft_substr(s1, (unsigned int)i, j - i + 1);
	return (cadena);
}
