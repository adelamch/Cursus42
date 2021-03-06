/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amolina- <amolina-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/16 20:49:07 by amolina-          #+#    #+#             */
/*   Updated: 2021/04/07 13:56:08 by amolina-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_lstsize(t_list *lst)
{	
	int		k;

	k = 0;
	while (lst != NULL)
	{
		lst = lst->next;
		k++;
	}
	return (k);
}
