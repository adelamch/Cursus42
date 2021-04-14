/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amolina- <amolina-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/16 20:43:43 by amolina-          #+#    #+#             */
/*   Updated: 2021/04/05 14:38:16 by amolina-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	char	*new_str;
	int		i;

	new_str = (char *)malloc(sizeof(char) * (ft_strlen(s1) + 1));
	i = 0;
	if (!new_str)
		return (NULL);
	while (s1[i])
	{
		new_str[i] = (char)s1[i];
		i++;
	}
	new_str[i] = '\0';
	return (new_str);
}
