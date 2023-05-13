/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jimhong <jimhong@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/17 14:52:45 by jimhong           #+#    #+#             */
/*   Updated: 2023/04/27 17:14:11 by jimhong          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	ft_cntword(const char *str, char c)
{
	size_t	cnt;
	size_t	flag;

	cnt = 0;
	flag = 0;
	while (*str != '\0')
	{
		if (*str != c && flag == 0)
		{
			flag = 1;
			cnt++;
		}
		else if (*str == c)
			flag = 0;
		str++;
	}
	return (cnt);
}

static char	*ft_strndup(const char *s, size_t num)
{
	char	*word;
	char	*tmp;

	word = (char *)malloc(sizeof(char) * (num + 1));
	if (!word)
		return (0);
	tmp = word;
	while (num-- > 0)
		*tmp++ = *s++;
	*tmp = '\0';
	return (word);
}

static char	**ft_free(char **list)
{
	size_t	i;

	i = 0;
	while (list[i])
	{
		free(list[i]);
		i++;
	}
	free(list);
	return (0);
}

char	**ft_split(char const *s, char c)
{
	char	**results;
	size_t	i;
	size_t	k;
	size_t	save;

	i = 0;
	k = 0;
	results = (char **)malloc(sizeof(char *) * (ft_cntword(s, c) + 1));
	if (!results)
		return (0);
	while (i < ft_cntword(s, c) && s[k] != '\0')
	{
		while (s[k] == c)
			k++;
		save = k;
		while (s[k] != c && s[k] != '\0')
			k++;
		results[i] = ft_strndup(&s[save], k - save);
		if (!results[i++])
			return (ft_free(results));
	}
	results[i] = 0;
	return (results);
}
