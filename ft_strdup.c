/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jimhong <jimhong@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/17 14:50:21 by jimhong           #+#    #+#             */
/*   Updated: 2023/03/17 14:50:29 by jimhong          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(char const *src)
{
	char	*ar;
	size_t	size;
	int		i;

	size = ft_strlen(src) + 1;
	ar = (char *)malloc(sizeof(char) * size);
	if (!ar)
		return (NULL);
	i = 0;
	while (src[i])
	{
		ar[i] = src[i];
		i++;
	}
	ar[i] = '\0';
	return (ar);
}
