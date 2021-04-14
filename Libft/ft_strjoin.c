/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amolina- <amolina-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/16 20:44:45 by amolina-          #+#    #+#             */
/*   Updated: 2021/04/09 12:30:05 by amolina-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*cadena;
	int		j;

	if (!s1 || !s2)
		return (NULL);
	cadena = (char *)malloc((ft_strlen(s1) + ft_strlen(s2) + 1) * sizeof(char));
	if (!cadena)
		return (NULL);
	j = 0;
	while (*s1)
	{
		cadena[j] = *s1;
		s1++;
		j++;
	}
	while (*s2)
	{
		cadena[j] = *s2;
		s2++;
		j++;
	}
	cadena[j] = '\0';
	return (cadena);
}
