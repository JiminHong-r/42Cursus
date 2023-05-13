/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jimhong <jimhong@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/17 15:38:53 by jimhong           #+#    #+#             */
/*   Updated: 2023/03/17 16:43:51 by jimhong          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	get_len(int n)
{
	size_t	len;

	len = 0;
	if (n < 0)
		len++;
	else if (n == 0)
		len++;
	while (n)
	{
		n /= 10;
		len++;
	}
	return (len);
}

char	*ft_itoa(int n)
{
	size_t			len;
	unsigned int	nbr;
	char			*num;

	len = get_len(n);
	nbr = n;
	num = (char *)malloc(sizeof(char) * (len + 1));
	if (!num)
		return (NULL);
	if (n < 0)
		nbr = -n;
	num[len] = '\0';
	while (len)
	{
		num[--len] = nbr % 10 + '0';
		nbr /= 10;
	}
	if (n < 0)
		num[0] = '-';
	return (num);
}
