/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zoentifi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/14 06:37:06 by zoentifi          #+#    #+#             */
/*   Updated: 2024/07/14 08:32:56 by zoentifi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int	*ft_range(int min, int max)
{
	int	i;
	int	*arr;
	int	len;

	if (min >= max)
		return (NULL);
	len = max - min;
	if (len < 0)
		len *= -1;
	arr = (int *)malloc(sizeof(int) * len);
	if (!arr)
		return (NULL);
	i = 0;
	while (i <= len)
	{
		arr[i] = min;
		min++;
		i++;
	}
	return (arr);
}
