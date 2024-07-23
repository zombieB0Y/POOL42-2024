/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base2.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zoentifi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/14 23:31:45 by zoentifi          #+#    #+#             */
/*   Updated: 2024/07/15 05:31:06 by zoentifi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_chartoint_base(char *str, char *base);
int		validlen(char *str);

void	ft_putnbr_base(int nbr, char *base, char *arr, int *p)
{
	long	nb;
	int		len;

	nb = nbr;
	len = validlen(base);
	if (nb < 0)
	{
		arr[(*p)] = '-';
		nb *= -1;
		(*p)++;
	}
	if (nb >= len)
	{
		ft_putnbr_base(nb / len, base, arr, p);
		nb = nb % len;
	}
	if (nb < len)
	{
		arr[(*p)] = base[nb];
		(*p)++;
	}
}

char	*ft_convert_base(char *nbr, char *base_from, char *base_to)
{
	int		i;
	int		nb;
	char	*arr;

	arr = (char *)malloc(sizeof(char) * 12);
	nb = ft_chartoint_base(nbr, base_from);
	i = 0;
	ft_putnbr_base(nb, base_to, arr, &i);
	arr[i] = '\0';
	return (arr);
}
