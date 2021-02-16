/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amolina- <amolina-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/08 15:17:41 by amolina-          #+#    #+#             */
/*   Updated: 2020/12/14 20:18:07 by amolina-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlen(char *str)
{
	unsigned int	len;
	char			*c;

	len = 0;
	c = str;
	while (*c != '\0')
	{
		c++;
		len++;
	}
	return (len);
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int i;
	unsigned int j;
	unsigned int k;

	i = 0;
	j = 0;
	k = ft_strlen(dest);
	if (size == 0)
		return (ft_strlen(src));
	if (size <= k)
		return (size + ft_strlen(src));
	else
	{
		while (dest[i] != '\0')
			i++;
		while (src[j] != '\0' && j < size - k - 1)
		{
			dest[i] = src[j];
			i++;
			j++;
		}
		dest[i] = '\0';
		return (k + ft_strlen(src));
	}
}
