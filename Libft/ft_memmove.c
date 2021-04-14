/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amolina- <amolina-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/24 20:47:17 by amolina-          #+#    #+#             */
/*   Updated: 2021/04/11 15:43:14 by amolina-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned char	*destiny;
	unsigned char	*source;

	destiny = (unsigned char *)dst;
	source = (unsigned char *)src;
	if (destiny > source)
	{
		while (len--)
			destiny[len] = source[len];
	}
	else if (destiny < source)
		ft_memcpy(destiny, source, len);
	return (destiny);
}
