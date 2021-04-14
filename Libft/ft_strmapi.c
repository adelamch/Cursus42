/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amolina- <amolina-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/16 20:45:58 by amolina-          #+#    #+#             */
/*   Updated: 2021/04/09 01:25:32 by amolina-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char			*cadena;
	unsigned int	i;

	if (!s || !f)
		return (NULL);
	cadena = (char *)malloc(sizeof(char) * (ft_strlen(s) + 1));
	if (!cadena)
		return (NULL);
	i = 0;
	while (s[i])
	{
		cadena[i] = f(i, s[i]);
		i++;
	}
	cadena[i] = '\0';
	return (cadena);
}
