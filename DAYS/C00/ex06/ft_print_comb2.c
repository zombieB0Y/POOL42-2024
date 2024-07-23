/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zoentifi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/26 17:35:28 by zoentifi          #+#    #+#             */
/*   Updated: 2024/06/26 18:08:55 by zoentifi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_print_comb2(void)
{
	int	aniki;
	int	b;

	aniki = 0;
	while (aniki <= 98)
	{
		b = aniki + 1;
		while (b <= 99)
		{
			ft_putchar(aniki / 10 + '0');
			ft_putchar(aniki % 10 + '0');
			ft_putchar(' ');
			ft_putchar(b / 10 + '0');
			ft_putchar(b % 10 + '0');
			if (aniki != 98)
				write(1, ", ", 2);
			b++;
		}
		aniki++;
	}
}
