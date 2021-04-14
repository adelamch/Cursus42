/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amolina- <amolina-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/16 20:50:30 by amolina-          #+#    #+#             */
/*   Updated: 2021/04/11 16:10:36 by amolina-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstdelone_v2(t_list *lst, void (*del)(void *))
{
	del(lst->content);
	free(lst);
}

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*ptr;
	t_list	*b;

	if (!lst || !(*lst))
		return ;
	ptr = *lst;
	while (ptr)
	{
		b = ptr;
		ptr = ptr->next;
		ft_lstdelone_v2(b, del);
	}
	*lst = NULL;
}
