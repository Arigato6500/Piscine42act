#include "ft_strs_to_tab.h"
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (*str++)
		i++;
	return (i);
}

char	*ft_strdup(char *src)
{
	int		len;
	int		i;
	char	*x;

	len = 0;
	i = 0;
	while (src[len])
		len++;
	x = malloc((sizeof(char) * len) + 1);
	if (x == NULL)
		return (NULL);
	while (src[i])
	{
		x[i] = src[i];
		i++;
	}
	x[i] = '\0';
	return (x);
}

struct s_stock_str *ft_strs_to_tab(int ac, char **av)
{
	int			i;
	t_stock_str	*stock;
	t_stock_str	*buf;

	stock = (t_stock_str*)malloc(sizeof(*stock) * (ac + 1));
	if (!stock)
		return (NULL);
	buf = stock;
	i = 0;
	while (i++ < ac)
	{
		buf->size = ft_strlen(*av);
		buf->str = *av;
		buf->copy = ft_strdup(*av);
		av++;
		buf++;
	}
	buf->str = 0;
	return (stock);

}