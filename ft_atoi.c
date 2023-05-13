/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jimhong <jimhong@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/13 16:55:02 by jimhong           #+#    #+#             */
/*   Updated: 2023/04/27 17:06:28 by jimhong          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

static int	ft_isspace(char ch)
{
	if (ch == ' ' || ch == '\n' || ch == '\t')
		return (1);
	else if (ch == '\v' || ch == '\f' || ch == '\r')
		return (1);
	return (0);
}

int	ft_atoi(const char *str)
{
	int		flag;
	int		results;

	flag = 1;
	results = 0;
	while (*str)
	{
		if (ft_isspace(*str))
			str++;
		else
			break ;
	}
	if (*str == '-')
	{
		flag = -flag;
		str++;
	}
	else if (*str == '+')
		str++;
	while (*str >= '0' && *str <= '9')
		results = results * 10 + (*str++ - '0');
	return (flag * results);
}
