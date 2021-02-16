/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amolina- <amolina-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/16 20:12:34 by amolina-          #+#    #+#             */
/*   Updated: 2021/02/16 20:42:36 by amolina-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

void	*ft_calloc(size_t count, size_t size)
{
	size_t	i;
	size_t	j;
	int		**matrix;

	i = 0;
	j = 0;
	matrix = (int **)malloc(count * sizeof(int *));
	while (i < count)
	{
		*matrix = (int *)malloc(size * sizeof(int));
		while (j < size)
		{
			matrix[i][j] = 0;
			j++;
		}
		i++;
		j = 0;
	}
	return (*matrix);
}
