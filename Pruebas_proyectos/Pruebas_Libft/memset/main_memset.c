/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_memset.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amolina- <amolina-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/24 18:20:10 by amolina-          #+#    #+#             */
/*   Updated: 2021/01/24 18:33:45 by amolina-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>
#include <string.h>

void	*ft_memset(void *b, int c, size_t len);

int	main ()
{
	char str1[20] = "Hola mundo!";
	char str2[20] = "Hola mundo!";

	ft_memset(str1, -1, 0*sizeof(char));
	memset(str2, -1, 0*sizeof(char));
	printf ("%s\n", str1);
	printf ("%s\n", str2);
	return (0);
}
