/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jimhong <jimhong@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/13 16:58:12 by jimhong           #+#    #+#             */
/*   Updated: 2023/03/13 16:58:21 by jimhong          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t len)
{
	size_t	lendst;
	size_t	lensrc;
	size_t	i;

	i = 0;
	lendst = ft_strlen(dst);
	lensrc = ft_strlen(src);
	if (len <= lendst)
		return (len + lensrc);
	while (src[i] && lendst + i < len - 1)
	{
		dst[lendst + i] = src[i];
		i++;
	}
	dst[lendst + i] = '\0';
	return (lendst + lensrc);
}
