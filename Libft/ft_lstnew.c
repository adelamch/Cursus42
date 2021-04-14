/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amolina- <amolina-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/16 20:48:29 by amolina-          #+#    #+#             */
/*   Updated: 2021/04/09 01:37:53 by amolina-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*one;

	one = (t_list *)malloc(sizeof(t_list));
	if (!one)
		return (NULL);
	one->content = content;
	one->next = NULL;
	return (one);
}
