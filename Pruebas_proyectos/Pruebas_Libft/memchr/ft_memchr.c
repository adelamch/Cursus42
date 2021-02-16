/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amolina- <amolina-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/31 19:07:40 by amolina-          #+#    #+#             */
/*   Updated: 2021/01/31 19:31:33 by amolina-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t i;

	i = 0;
	while (i < n && *(char *)(s + i) != '\0')
	{
		if (*(char *)(s + i) == (unsigned char)c)
			return ((char *)(s + i));
		i++;
	}
	return (NULL);
}
