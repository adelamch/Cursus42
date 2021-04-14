/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amolina- <amolina-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/31 12:28:38 by amolina-          #+#    #+#             */
/*   Updated: 2021/04/11 17:30:10 by amolina-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	size_t	i;

	i = ft_strlen(s);
	while (i--)
	{
		if (*(s + i) == (unsigned char)c)
			return ((char *)(s + i));
	}
	if ((unsigned char)c == '\0')
		return ((char *)s + ft_strlen(s));
	return (NULL);
}
