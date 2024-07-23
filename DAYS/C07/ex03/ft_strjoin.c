/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zoentifi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/14 09:10:21 by zoentifi          #+#    #+#             */
/*   Updated: 2024/07/14 11:53:27 by zoentifi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_strlen(int size, char **strs, char *sep)
{
	int	i;
	int	j;
	int	len;

	i = 0;
	while (i < size)
	{
		j = 0;
		while (strs[i][j])
		{
			j++;
		}
		i++;
		len = len + j;
	}
	i = 0;
	while (sep[i])
	{
		i++;
	}
	len = len + (size - 1) * i;
	return (len);
}

void	ft_cat(char *arr, int size, char **strs, char *sep)
{
	int	i;
	int	j;
	int	k;

	i = 0;
	k = 0;
	while (i < size)
	{
		j = 0;
		while (strs[i][j])
			arr[k++] = strs[i][j++];
		if (i < size - 1)
		{
			j = 0;
			while (sep[j])
				arr[k++] = sep[j++];
		}
		i++;
	}
	arr[k] = '\0';
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char	*arr;
	int		len;

	if (size == 0)
	{
		arr = (char *)malloc(sizeof(char) * 1);
		arr[0] = '\0';
		return (arr);
	}
	len = ft_strlen(size, strs, sep);
	arr = (char *)malloc(sizeof(char) * len + 1);
	if (!arr)
		return (NULL);
	ft_cat(arr, size, strs, sep);
	return (arr);
}
/*#include <stdio.h>
int main() {
    // Test case 1: Normal case with multiple strings and a separator
    char *strs1[] = {"Hello", "world", "this", "is", "C"};
    char sep1[] = ", ";
    char *result1 = ft_strjoin(5, strs1, sep1);
    if (result1) {
        printf("Test case 1: %s\n", result1);
        free(result1);
    } else {
        printf("Test case 1: Error\n");
    }

    // Test case 2: Only one string, no separators needed
    char *strs2[] = {"Single"};
    char sep2[] = ", ";
    char *result2 = ft_strjoin(1, strs2, sep2);
    if (result2) {
        printf("Test case 2: %s\n", result2);
        free(result2);
    } else {
        printf("Test case 2: Error\n");
    }

    // Test case 3: No strings (empty array)
    char *strs3[] = {NULL};
    char sep3[] = ", ";
    char *result3 = ft_strjoin(0, strs3, sep3);
    if (result3) {
        printf("Test case 3: %s\n", result3);
        free(result3);
    } else {
        printf("Test case 3: Error\n");
    }

    // Test case 4: Empty separator
    char *strs4[] = {"Hello", "world"};
    char sep4[] = "";
    char *result4 = ft_strjoin(2, strs4, sep4);
    if (result4) {
        printf("Test case 4: %s\n", result4);
        free(result4);
    } else {
        printf("Test case 4: Error\n");
    }

    // Test case 5: Strings with special characters
    char *strs5[] = {"Hello", "\nworld", "\tthis", "is", "C"};
    char sep5[] = ", ";
    char *result5 = ft_strjoin(5, strs5, sep5);
    if (result5) {
        printf("Test case 5: %s\n", result5);
        free(result5);
    } else {
        printf("Test case 5: Error\n");
    }

    return 0;
}*/
