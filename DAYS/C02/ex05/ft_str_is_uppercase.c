/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zoentifi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/30 04:06:33 by zoentifi          #+#    #+#             */
/*   Updated: 2024/06/30 04:10:57 by zoentifi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_uppercase(char *str)
{
	int	i;
	int	check;

	i = 0;
	check = 1;
	while (str[i])
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
			check = 1;
		else
			return (0);
		i++;
	}
	return (check);
}
