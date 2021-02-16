/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_isalnum.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amolina- <amolina-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/16 18:53:58 by amolina-          #+#    #+#             */
/*   Updated: 2021/02/16 18:59:05 by amolina-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ctype.h>
#include <stdio.h>

int		ft_isalnum(int c);

int		main()
{
	printf("%d\n", ft_isalnum('8'));
	printf("%d\n", isalnum('8'));
	return (0);
}
