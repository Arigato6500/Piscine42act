/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssoriano <ssoriano@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/23 16:05:35 by ssoriano          #+#    #+#             */
/*   Updated: 2026/07/30 10:06:54 by ssoriano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_len(char *lista)
{
	int	len;

	len = 0;
	while (lista[len])
		len++;
	return (len);
}

int	ft_duplicates(char *str)
{
	int	i;
	int	j;

	i = 0;
	while (str[i])
	{
		j = i + 1;
		while (str[j])
		{
			if (str[i] == str[j])
				return (0);
			j++;
		}
		i++;
	}
	return (1);
}

int	ft_rev_base(char *base)
{
	int	i;

	i = 0;
	if (base[0] == '\0' || base[1] == '\0'
		|| !ft_duplicates(base))
		return (0);
	while (base[i] != '\0')
	{
		if (base[0] == base[i + 1] || base[i] == '+' || base[i] == '-')
			return (0);
		i++;
	}
	return (1);
}

void	ft_putnbr_base(int nbr, char *base)
{
	long	i;
	long	len;
	char	cnb;

	len = ft_len(base);
	i = (long)nbr;
	if (!ft_rev_base(base))
		return ;
	if (i < 0)
	{
		i *= -1;
		write(1, "-", 1);
	}
	if (i >= len)
		ft_putnbr_base(i / len, base);
	cnb = base[(i % len)];
	write(1, &cnb, 1);
}

// int main(void)
// {
// 	ft_putnbr_base(255, "0123456789ABC9DEF");
// 	write(1, "\n", 1);
// 	ft_putnbr_base(42, "m");
// 	write(1, "\n", 1);
// 	ft_putnbr_base(42, "01");
// 	write(1, "\n", 1);
// 	ft_putnbr_base(42, "01-234567");
// 	write(1, "\n", 1);
// }
