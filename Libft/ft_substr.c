/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amolina- <amolina-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/16 20:44:17 by amolina-          #+#    #+#             */
/*   Updated: 2021/04/11 18:04:13 by amolina-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char			*cadena;
	unsigned int	i;
	size_t			j;

	if (start >= ft_strlen(s))
	{
		cadena = (char *)malloc(sizeof(*cadena));
		*cadena = '\0';
		return (cadena);
	}
	if (len > ft_strlen(&s[start]))
		len = ft_strlen(&s[start]);
	cadena = (char *)malloc((len + 1) * sizeof(char));
	if (! s || !cadena)
		return (NULL);
	i = start;
	j = 0;
	while (s[i] && j < len && i < ft_strlen(s))
	{
		cadena[j] = s[i];
		i++;
		j++;
	}
	cadena[j] = '\0';
	return (cadena);
}
