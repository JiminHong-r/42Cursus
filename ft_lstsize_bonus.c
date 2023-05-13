/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jimhong <jimhong@student.42seoul.k>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/27 15:46:17 by jimhong           #+#    #+#             */
/*   Updated: 2023/03/27 15:46:18 by jimhong          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	t_list	*node;
	size_t	len;

	if (!lst)
		return (0);
	node = lst;
	len = 0;
	while (node->next)
	{
		len++;
		node = node->next;
	}
	if (node->next == NULL)
		len++;
	return (len);
}
