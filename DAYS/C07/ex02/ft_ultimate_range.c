/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zoentifi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/14 08:44:14 by zoentifi          #+#    #+#             */
/*   Updated: 2024/07/14 08:57:38 by zoentifi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	i;
	int	*arr;
	int	len;

	if (max <= min)
	{
		*range = NULL;
		return (0);
	}
	len = max - min;
	arr = NULL;
	arr = (int *)malloc(sizeof(int) * len);
	if (!arr)
	{
		*range = NULL;
		return (-1);
	}
	i = 0;
	while (i < len)
	{
		arr[i] = min + i;
		i++;
	}
	*range = arr;
	return (len);
}
/*#include <stdio.h>

int ft_ultimate_range(int **range, int min, int max);

int main() {
    int *range;
    int size;
    int i;

    size = ft_ultimate_range(&range, 3, 3);
    if (size == -1) {
        printf("Memory allocation failed\n");
        return 1;
    } else if (size == 0) {
        printf("Invalid range (min >= max)\n");
        return 1;
    }

    printf("Range size: %d\n", size);
    for (i = 0; i < size; i++) {
        printf("%d ", range[i]);
    }
    printf("\n");

    free(range);
    return 0;
}*/
