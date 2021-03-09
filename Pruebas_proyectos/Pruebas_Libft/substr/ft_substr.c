/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amolina- <amolina-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/16 20:44:17 by amolina-          #+#    #+#             */
/*   Updated: 2021/02/28 13:17:52 by amolina-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char			*cadena;
	unsigned int	i;
	size_t			j;

	cadena = (char *)malloc((len + 1) * sizeof(char));
	i = start;
	j = 0;
	while (s[i] != '\0' && j < len)
	{
		cadena[j] = s[i];
		i++;
		j++;
	}
	cadena[j] = '\0';
	return (cadena);
}
