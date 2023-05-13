/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jimhong <jimhong@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/27 16:39:26 by jimhong           #+#    #+#             */
/*   Updated: 2023/04/27 17:02:31 by jimhong          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*newnode;
	t_list	*node;
	char	*tmp;

	node = 0;
	while (lst)
	{
		tmp = (char *)f(lst->content);
		newnode = ft_lstnew(tmp);
		if (!newnode)
		{
			ft_lstclear(&node, del);
			del(tmp);
			return (0);
		}
		ft_lstadd_back(&node, newnode);
		lst = lst->next;
	}
	newnode = NULL;
	return (node);
}
