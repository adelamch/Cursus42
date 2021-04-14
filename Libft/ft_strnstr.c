/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amolina- <amolina-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/16 19:26:33 by amolina-          #+#    #+#             */
/*   Updated: 2021/04/03 20:50:37 by amolina-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *str, const char *to_find, size_t n)
{
	size_t	i;
	size_t	j;
	size_t	a;

	i = 0;
	j = 0;
	a = 0;
	while (to_find[a] != '\0')
		a++;
	if (a == 0)
		return ((char *)str);
	while (str[i] != '\0' && i < n)
	{
		while (str[i + j] == to_find[j] && (i + j) < n)
		{
			if (a == j + 1)
				return ((char *)(str + i));
			j++;
		}
		i++;
		j = 0;
	}
	return (00);
}
