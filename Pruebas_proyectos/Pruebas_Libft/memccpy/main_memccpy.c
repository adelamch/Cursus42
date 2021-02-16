/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_memccpy.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amolina- <amolina-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/24 20:32:04 by amolina-          #+#    #+#             */
/*   Updated: 2021/01/24 20:39:24 by amolina-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>
#include <string.h>

void	*ft_memccpy(void *restrict dst, const void *restrict src,
		int c, size_t n);

int		main()
{
	char str1[20] = "Hola mundo!";
	char str2[20] = "Hello world...";
	char str3[20] = "Hola mundo!";

	ft_memccpy(str1, str2, '.', 15);
	memccpy(str3, str2, '.', 15);
	printf("%s\n", str1);
	printf("%s\n", str3);
	return (0);
}
