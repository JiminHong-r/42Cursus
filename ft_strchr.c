/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jimhong <jimhong@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/17 13:21:18 by jimhong           #+#    #+#             */
/*   Updated: 2023/03/17 14:39:13 by jimhong          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *str, int c)
{
	char	ch;

	ch = (char) c;
	while (*str)
	{
		if (*str == ch)
			return ((char *)str);
		str++;
	}
	if (*str == ch)
		return ((char *)str);
	return (0);
}
