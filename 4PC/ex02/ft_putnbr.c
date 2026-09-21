/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssoriano <ssoriano@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/22 14:51:22 by ssoriano          #+#    #+#             */
/*   Updated: 2026/07/28 12:58:55 by ssoriano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

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
/*
int main(void)
{
	ft_putnbr(2147483647);
}
*/