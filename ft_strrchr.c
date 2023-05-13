/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jimhong <jimhong@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/17 13:22:03 by jimhong           #+#    #+#             */
/*   Updated: 2023/03/17 14:47:27 by jimhong          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *str, int c)
{
	char	*last;
	char	ch;

	last = NULL;
	ch = (char) c;
	while (*str)
	{
		if (*str == ch)
			last = (char *)str;
		str++;
	}
	if (*str == ch)
		return ((char *)str);
	return (last);
}
