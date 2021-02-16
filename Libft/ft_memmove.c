/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amolina- <amolina-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/24 20:47:17 by amolina-          #+#    #+#             */
/*   Updated: 2021/02/16 19:13:14 by amolina-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

size_t	ft_strlen(char *str)
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

char	*source_after(char *dst, char *src, size_t len)
{
	size_t i;

	i = 0;
	while (i < len && src[i] != '\0')
	{
		dst[i] = src[i];
		i++;
	}
	dst[i] = '\0';
	return (dst);
}

char	*source_before(char *dst, char *src, size_t len)
{
	size_t i;

	i = len;
	while (i > 0)
	{
		dst[i - 1] = src[i - 1];
		i--;
	}
	return (dst);
}

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	size_t	i;
	char	*cadena;

	i = 0;
	cadena = (char *)malloc(sizeof(char) * (ft_strlen((char *)dst) + 1));
	while (i < ft_strlen((char *)dst))
	{
		cadena[i] = *(char *)(dst + i);
		i++;
	}
	cadena[i] = '\0';
	if (dst > src)
		source_before((char *)dst, (char *)src, len);
	else
		source_after((char *)dst, (char *)src, len);
	return (cadena);
}
