/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_memcpy.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amolina- <amolina-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/24 19:45:41 by amolina-          #+#    #+#             */
/*   Updated: 2021/01/24 20:10:29 by amolina-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>
#include <string.h>

void	*ft_memcpy(void *restrict dst, const void *restrict src, size_t n);

int		main()
{
	char str1[20] = "Hola mundo!";
	char str2[20] = "Hello world...";
	char str3[20] = "Hola mundo!";

	ft_memcpy(str1, str2, 3);
	memcpy(str3, str2, 3);
	printf("%s\n", str1);
	printf("%s\n", str3);
	return (0);
}
