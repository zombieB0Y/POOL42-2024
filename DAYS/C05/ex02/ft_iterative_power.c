/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zoentifi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/11 01:31:32 by zoentifi          #+#    #+#             */
/*   Updated: 2024/07/11 05:33:52 by zoentifi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_power(int nb, int power)
{
	int	result;

	if (power == 0)
		return (1);
	else if (power < 0)
		return (0);
	result = nb;
	while (power - 1 > 0)
	{
		result = nb * result;
		power--;
	}
	return (result);
}
