/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zoentifi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/11 04:24:19 by zoentifi          #+#    #+#             */
/*   Updated: 2024/07/11 20:03:29 by zoentifi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_prime(int nb)
{
	int	i;

	i = 2;
	while (i < nb)
	{
		if (nb % i == 0)
			return (0);
		i++;
	}
	return (1);
}

int	ft_find_next_prime(int nb)
{
	int	prime;
	int	check;

	if (nb == 0 || nb == 1)
		return (2);
	prime = nb;
	check = 0;
	if (prime < 0)
		return (2);
	if (ft_prime(prime))
		return (prime);
	while (!check)
	{
		prime++;
		if (ft_prime(prime))
			check = 1;
	}
	return (prime);
}
