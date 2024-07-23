/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zoentifi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/14 20:07:12 by zoentifi          #+#    #+#             */
/*   Updated: 2024/07/15 04:14:48 by zoentifi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	validlen(char *str)
{
	int	i;
	int	j;

	i = 0;
	if (str[0] == '\0' || str[1] == '\0')
		return (0);
	while (str[i])
	{
		if (str[i] == '-' || str[i] == '+')
			return (0);
		j = i + 1;
		while (str[i] && str[j])
		{
			if (str[i] == str[j])
				return (0);
			j++;
		}
		i++;
	}
	return (i);
}

int	ft_sign(char *str, int *i)
{
	int	sign;

	sign = 1;
	while (str[(*i)] < 33)
		(*i)++;
	while (str[(*i)] == '-' || str[(*i)] == '+')
	{
		if (str[(*i)] == '-')
			sign *= -1;
		(*i)++;
	}
	return (sign);
}

int	validnbr(char c, char *base)
{
	int	nb_index;

	nb_index = 0;
	while (base[nb_index])
	{
		if (c == base[nb_index])
			return (nb_index);
		nb_index++;
	}
	return (-1);
}

int	ft_chartoint_base(char *str, char *base)
{
	int	i;
	int	sign;
	int	baselen;
	int	result;

	result = 0;
	i = 0;
	baselen = validlen(base);
	sign = ft_sign(str, &i);
	if (baselen != 0)
	{
		while (validnbr(str[i], base) != -1)
		{
			result = result * baselen + validnbr(str[i], base);
			i++;
		}
	}
	return (result * sign);
}
	