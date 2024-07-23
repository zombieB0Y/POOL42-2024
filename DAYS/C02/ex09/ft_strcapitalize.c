/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zoentifi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/30 05:27:26 by zoentifi          #+#    #+#             */
/*   Updated: 2024/06/30 05:44:48 by zoentifi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_check(char a)
{
	if (a >= 'a' && a <= 'z')
		return (1);
	if (a >= 'A' && a <= 'Z')
		return (1);
	if (a >= '0' && a <= '9')
		return (1);
	else
		return (0);
}

char	*ft_strcapitalize(char	*str)
{
	int	i;
	int	check;

	i = 0;
	check = 1;
	while (str[i])
	{
		if (ft_check(str[i]))
		{
			if (check == 1 && str[i] >= 'a' && str[i] <= 'z')
				str[i] = str[i] - 32;
			else if (check == 0 && str[i] >= 'A' && str[i] <= 'Z')
				str[i] = str[i] + 32;
			check = 0;
		}
		else
			check = 1;
		i++;
	}
	return (str);
}
