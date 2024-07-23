#include <stdlib.h>
#include "ft_stock_str.h"

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

char	*ft_strdup(char *src)
{
	int		i;
	char	*dest;
	char	*d;

	i = 0;
	dest = (char *) malloc(ft_strlen(src) * sizeof(char) + 1);
	d = dest;
	if (!d)
		return (0);
	while (src[i])
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

struct s_stock_str	*ft_strs_to_tab(int ac, char **av)
{
	int					i;
	struct s_stock_str	*arr;
	struct s_stock_str	*d;

	arr = malloc((ac + 1) * sizeof(struct s_stock_str));
	d = arr;
	if (!d)
		return (0);
	i = 0;
	while (i < ac)
	{
		arr[i].size = ft_strlen(av[i]);
		arr[i].str = av[i];
		arr[i].copy = ft_strdup(av[i]);
		i++;
	}
	arr[i].str = 0;
	arr[i].copy = 0;
	return (arr);
}
/*
int	main(int argc, char **argv)
{
	int	i;
	struct s_stock_str	*structs;

	structs = ft_strs_to_tab(argc, argv);
	i = 0;
	while (i < argc)
	{
		printf("\noriginal : %s\n", structs[i].str);
		printf("copied : %s\n", structs[i].copy);
		printf("size : %d\n", structs[i].size);
		i++;
	}
}
*/
