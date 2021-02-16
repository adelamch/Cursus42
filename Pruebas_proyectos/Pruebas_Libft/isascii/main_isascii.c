/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_isascii.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amolina- <amolina-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/16 19:38:50 by amolina-          #+#    #+#             */
/*   Updated: 2021/02/16 19:42:55 by amolina-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <ctype.h>

int	ft_isascii(int c);

int	main()
{
	printf("%d\n", ft_isascii(-731));
	printf("%d\n", isascii(-731));
	return (0);
}
