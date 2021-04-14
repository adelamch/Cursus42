/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amolina- <amolina-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/16 20:45:44 by amolina-          #+#    #+#             */
/*   Updated: 2021/04/11 17:23:41 by amolina-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	numcifras(long a)
{
	int	k;

	k = 0;
	if (a == 0)
		k++;
	if (a < 0)
		a = -a;
	while (a > 0)
	{
		a = a / 10;
		k++;
	}
	return (k);
}

char	*zero(int a, char *num)
{
	num[0] = a + '0';
	num[1] = '\0';
	return (num);
}

char	*negative(long a, char *num)
{
	int		i;

	i = numcifras(a);
	num[0] = 45;
	num[i + 1] = '\0';
	a = -a;
	while (a > 0)
	{
		num[i] = (a % 10) + '0';
		a = a / 10;
		i--;
	}
	return (num);
}

char	*ft_itoa(int n)
{
	char	*number;
	int		i;
	int		k;

	k = 1;
	if (n < 0)
		k++;
	number = (char *)malloc(sizeof(char) * (numcifras(n) + k));
	if (!number)
		return (NULL);
	if (n < 0)
		return (negative(n, number));
	i = numcifras(n);
	number[i] = '\0';
	if (n == 0)
		return (zero(n, number));
	i--;
	while (n > 0)
	{
		number[i] = (n % 10) + '0';
		n = n / 10;
		i--;
	}
	return (number);
}
