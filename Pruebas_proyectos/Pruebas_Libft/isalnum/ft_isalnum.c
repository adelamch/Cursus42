/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amolina- <amolina-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/16 18:46:28 by amolina-          #+#    #+#             */
/*   Updated: 2021/02/16 18:53:44 by amolina-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_isalnum(int c)
{
	if (((unsigned char)c >= 48 && (unsigned char)c <= 57) ||
		((unsigned char)c >= 65 && (unsigned char)c <= 90) ||
		((unsigned char)c >= 97 && (unsigned char)c <= 122))
		return (1);
	return (0);
}
