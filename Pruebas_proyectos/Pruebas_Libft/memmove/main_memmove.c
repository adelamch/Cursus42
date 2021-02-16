/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_memmove.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amolina- <amolina-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/24 20:51:15 by amolina-          #+#    #+#             */
/*   Updated: 2021/01/31 19:02:34 by amolina-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>

void	*ft_memmove(void *dst, const void *src, size_t len);

int		main()
{
	char cad1[20] = "Chao World!";
	char cad2[20] = "Hola Mundo!";
	char cad3[20] = "Chao World!";

	memmove(cad3, cad2, 4);
	printf("%s\n", cad3);
	ft_memmove(cad1, cad2, 4);
	printf("%s\n", cad1);
	return (0);
}
