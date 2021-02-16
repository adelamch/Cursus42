/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_bzero.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amolina- <amolina-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/24 18:41:00 by amolina-          #+#    #+#             */
/*   Updated: 2021/01/24 18:50:05 by amolina-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <strings.h>
#include <stdio.h>

void	ft_bzero(void *s, size_t n);

int	main()
{
	char str1[20] = "Hola mundo!";
	char str2[20] = "Hola mundo!";

	ft_bzero(str1, 3);
	bzero(str2, 3);
	printf("%c\n", str1[3]);
	printf("%c\n", str2[3]);
	return (0);
}
