/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amolina- <amolina-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/16 20:51:02 by amolina-          #+#    #+#             */
/*   Updated: 2021/04/11 16:18:47 by amolina-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew_v2(void *content)
{
	t_list	*one;

	one = (t_list *)malloc(sizeof(t_list));
	if (!one)
		return (NULL);
	one->content = content;
	one->next = NULL;
	return (one);
}

void	ft_lstdelone_v3(t_list *lst, void (*del)(void *))
{
	del(lst->content);
	free(lst);
}

void	ft_lstclear_v2(t_list **lst, void (*del)(void *))
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
		ft_lstdelone_v3(b, del);
	}
	*lst = NULL;
}

void	ft_lstadd_back_v2(t_list **lst, t_list *new)
{
	t_list	*last;

	if (lst && new)
	{
		last = *lst;
		if (*lst == NULL)
			*lst = new;
		else
		{
			while (last->next)
				last = last->next;
			last->next = new;
			last->next->next = NULL;
		}
	}
}

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new;
	t_list	*aux;

	new = NULL;
	while (lst)
	{
		aux = ft_lstnew_v2(f(lst->content));
		if (!aux)
		{
			ft_lstclear_v2(&new, del);
			return (NULL);
		}
		ft_lstadd_back_v2(&new, aux);
		lst = lst->next;
	}
	return (new);
}
