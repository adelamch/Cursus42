/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amolina- <amolina-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/24 20:22:01 by amolina-          #+#    #+#             */
/*   Updated: 2021/01/24 20:32:48 by amolina-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

void	*ft_memccpy(void *restrict dst, const void *restrict src,
		int c, size_t n)
{
	size_t i;

	i = 0;
	while (i < n)
	{
		*(char *)(dst + i) = *(char *)(src + i);
		if (*(char *)(src + i) == (unsigned char)c)
			return (dst + i + 1);
		i++;
	}
	return (NULL);
}
