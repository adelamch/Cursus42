/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amolina- <amolina-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/16 20:45:06 by amolina-          #+#    #+#             */
/*   Updated: 2021/03/09 21:38:04 by amolina-         ###   ########.fr       */
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

char	*no_start(char *str, char *quit, size_t n, char *cad)
{
	size_t i;

	i = 0;
	while (*(str + n) != '\0' && *(quit + n) != '\0'
			&& *(str + n) == *(quit + n))
		n++;
	if (n == ft_strlen(quit))
	{
		while (*(str + n) != '\0')
		{
			cad[i] = *(str + n);
			i++;
			n++;
		}
	}
	return (cad);
}

char	*no_end(char *quit, size_t n, char *cad)
{
	size_t i;
	size_t j;

	i = ft_strlen(cad) - 1;
	j = ft_strlen(quit) - 1;
	while (*(cad + i) == *(quit + j) && i >= 0 && j >= 0)
	{
		n++;
		i--;
		j--;
	}
	if (n == ft_strlen(quit))
		cad[i + 1] = '\0';
	else
		cad[i + n + 1] = '\0';
	return (cad);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char		*cadena;
	size_t		k;

	cadena = (char *)malloc((ft_strlen(s1) + 1) * sizeof(char));
	k = 0;
	cadena = no_start((char *)s1, (char *)set, k, cadena);
	if (cadena[k] == '\0')
	{
		while (s1[k] != '\0')
		{
			cadena[k] = s1[k];
			k++;
		}
		cadena[k] = '\0';
	}
	k = 0;
	cadena = no_end((char *)set, k, cadena);
	return (cadena);
}
