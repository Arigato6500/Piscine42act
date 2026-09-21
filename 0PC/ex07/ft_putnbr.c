/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssoriano <ssoriano@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/10 11:21:12 by ssoriano          #+#    #+#             */
/*   Updated: 2026/07/22 12:59:25 by ssoriano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putnbr(int nb)
{
	char	numero;
	int		contador;

	contador = 10;
	if (nb == -2147483648)
	{
		ft_putnbr(nb / 10);
		ft_putnbr(-(nb % 10));
		return ;
	}
	while (nb / contador != 0)
		contador *= 10;
	contador = contador / 10;
	if (nb < 0)
	{
		nb *= -1;
		write(1, "-", 1);
	}
	while (contador != 0)
	{
		numero = nb / contador % 10 + 48;
		write(1, &numero, 1);
		contador = contador / 10;
	}
}
/*
int	main(void)
{
	ft_putnbr(-2147483648);
}
*/