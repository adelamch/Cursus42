/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amolina- <amolina-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/24 18:52:45 by amolina-          #+#    #+#             */
/*   Updated: 2021/01/24 20:44:20 by amolina-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

size_t		ft_strlen(char *str)
{
	size_t	len;
	int		i;

	len = 0;
	i = 0;
	while (str[i] != '\0')
	{
		len++;
		i++;
	}
	return (len);
}

void		*ft_memcpy(void *restrict dst, const void *restrict src, size_t n)
{
	size_t	i;
	char	*cadena;

	i = 0;
	cadena = (char *)malloc(sizeof(char) * (ft_strlen((char *)dst) + 1));
	while (i < ft_strlen((char*)dst))
	{
		cadena[i] = *(char *)(dst + i);
		i++;
	}
	cadena[i] = '\0';
	i = 0;
	while (i < n)
	{
		*(char *)(dst + i) = *(char *)(src + i);
		i++;
	}
	return (cadena);
}
