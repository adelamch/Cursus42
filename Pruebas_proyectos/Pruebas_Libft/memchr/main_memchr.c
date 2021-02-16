/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_memchr.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amolina- <amolina-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/31 19:25:44 by amolina-          #+#    #+#             */
/*   Updated: 2021/01/31 19:36:33 by amolina-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdlib.h>
#include <stdio.h>

void	*ft_memchr(const void *s, int c, size_t n);

int		main()
{
	char cad[20] = "hey que pasa";

	printf("%s\n", ft_memchr(cad, -1, 45));
	printf("%s\n", memchr(cad, -1, 45));
	return (0);
}
