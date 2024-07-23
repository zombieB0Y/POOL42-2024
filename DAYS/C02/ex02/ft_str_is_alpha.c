/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zoentifi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/30 02:07:40 by zoentifi          #+#    #+#             */
/*   Updated: 2024/06/30 03:54:53 by zoentifi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_alpha(char *str)
{
	int	i;
	int	check;

	i = 0;
	check = 1;
	while (str[i])
	{
		if (str[i] >= 'a' && str[i] <= 'z')
			check = 1;
		else if (str[i] >= 'A' && str[i] <= 'Z')
			check = 1;
		else
		{
			check = 0;
			return (check);
		}
		i++;
	}
	return (check);
}
