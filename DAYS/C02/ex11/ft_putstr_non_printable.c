/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zoentifi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/30 06:09:03 by zoentifi          #+#    #+#             */
/*   Updated: 2024/07/01 02:29:59 by zoentifi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_print_hex(int a)
{
	char	*base_hex;

	base_hex = "0123456789abcdef";
	if (a > 16)
	{
		ft_print_hex(a / 16);
		ft_print_hex(a % 16);
	}
	else
		ft_putchar(base_hex[a]);
}

void	ft_putstr_non_printable(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] < 32 || str[i] == 127)
		{
			ft_putchar('\\');
			if (str[i] < 16)
				ft_putchar('0');
			ft_print_hex(str[i]);
		}
		else
			ft_putchar(str[i]);
		i++;
	}
}
