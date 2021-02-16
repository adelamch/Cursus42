/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amolina- <amolina-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/24 16:46:56 by amolina-          #+#    #+#             */
/*   Updated: 2021/01/24 18:20:01 by amolina-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

void	*ft_memset(void *b, int c, size_t len)
{
	size_t i;

	i = 0;
	if (!b)
		return (NULL);
	while (i < len)
	{
		*(char *)(b + i) = (unsigned char)c;
		i++;
	}
	return (b);
}
