#include "ft_strs_to_tab.c"
#include <unistd.h>

void	ft_putstr(char *str)
{
	int		i;

	i = 0;
	while (str[i] != '\0')
	{
		write(1, &str[i], 1);
		i++;
	}
}

void	ft_putnbr(int nb)
{
	int		i;
	char	cnb;

	i = 0;
	if (nb == -2147483648)
	{
		ft_putnbr(nb / 10);
		ft_putnbr(-(nb % 10));
		return ;
	}
	if (nb < 0)
	{
		nb *= -1;
		write(1, "-", 1);
	}
	if (nb >= 10)
		ft_putnbr(nb / 10);
	cnb = (nb % 10) + '0';
	write(1, &cnb, 1);
}

void ft_show_tab(struct s_stock_str *par)
{
	while (par->str)
	{
		ft_putstr(par->str);
		write(1, "\n", 2);
		ft_putnbr(par->size);
		write(1, "\n", 2);
		ft_putstr(par->copy);
		write(1, "\n", 2);
		par++;
	}
	return ;
}
int main(int argc, char **argv)
{
	struct s_stock_str *things;
	if (argc > 1)
	{
		things = ft_strs_to_tab(argc - 1, ++argv);
		ft_show_tab(things);
	}
	return (0);
}