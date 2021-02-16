/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_toupper.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amolina- <amolina-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/16 20:00:01 by amolina-          #+#    #+#             */
/*   Updated: 2021/02/16 20:02:57 by amolina-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <ctype.h>

int	ft_toupper(int c);

int	main()
{
	printf("%d\n", ft_toupper(-6319));
	printf("%d\n", toupper(-6319));
	return (0);
}
