/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_isprint.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amolina- <amolina-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/16 19:48:04 by amolina-          #+#    #+#             */
/*   Updated: 2021/02/16 19:48:30 by amolina-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <ctype.h>

int	ft_isprint(int c);

int	main()
{
	printf("%d\n", ft_isprint(-731));
	printf("%d\n", isprint(-731));
	return (0);
}
