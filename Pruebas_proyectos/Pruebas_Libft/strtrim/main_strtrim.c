/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_strtrim.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amolina- <amolina-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/09 20:55:23 by amolina-          #+#    #+#             */
/*   Updated: 2021/03/10 20:57:42 by amolina-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strtrim(char const *s1, char const *set);

int		main()
{
	char base[20] = "ahsemucadelahsemuc";
	char quitar[8] = "ahsemuc";
	printf("%s\n", ft_strtrim(base, quitar));
	return (0);
}