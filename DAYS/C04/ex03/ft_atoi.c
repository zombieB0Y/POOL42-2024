/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zoentifi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/04 11:01:23 by zoentifi          #+#    #+#             */
/*   Updated: 2024/07/07 11:48:45 by zoentifi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_checkspe(char c)
{
	if (c == ' ' || c == '\t' || c == '\n' || c == '\f' || c == '\r')
		return (1);
	return (0);
}

int	ft_checksign(char c)
{
	if (c == '-' || c == '+')
	{
		if (c == '-')
			return (1);
	}
	return (0);
}

int	ft_checknumbers(char c)
{
	if (c >= '0' && c <= '9')
		return (1);
	return (0);
}

int	ft_atoi(char *str)
{
	int	sign;
	int	result;

	sign = 1;
	result = 0;
	while (ft_checkspe(*str))
	{
		str++;
	}
	while (*str == '-' || *str == '+')
	{
		if (ft_checksign(*str))
		{
			sign = -sign;
			str++;
		}
		else
			str++;
	}
	while (ft_checknumbers(*str))
	{
		result = result * 10 + (*str - '0');
		str++;
	}
	return (result * sign);
}
