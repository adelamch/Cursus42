/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amolina- <amolina-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/16 20:12:34 by amolina-          #+#    #+#             */
/*   Updated: 2021/04/09 12:28:18 by amolina-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	size_t	i;
	void	*memory;

	i = 0;
	memory = malloc(count * size);
	if (!memory)
		return (NULL);
	ft_memset(memory, 0, count * size);
	return (memory);
}
