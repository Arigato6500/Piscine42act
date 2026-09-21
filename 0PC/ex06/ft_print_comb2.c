/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssoriano <ssoriano@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/09 12:50:23 by ssoriano          #+#    #+#             */
/*   Updated: 2026/07/22 16:42:47 by ssoriano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	print_ft(int decimala, int decimalc)
{
	char	a;

	a = decimala / 10 + '0';
	write(1, &a, 1);
	a = decimala % 10 + '0';
	write(1, &a, 1);
	write(1, " ", 1);
	a = decimalc / 10 + '0';
	write(1, &a, 1);
	a = decimalc % 10 + '0';
	write(1, &a, 1);
	if (!(decimala == 98 && decimalc == 99))
		write(1, ", ", 2);
	a = '0';
	return (0);
}

void	ft_print_comb2(void)
{
	int		x;
	int		y;

	x = 0;
	while (x != 99)
	{
		y = x + 1;
		while (y != 100)
		{
			print_ft(x, y);
			y++;
		}
		x++;
	}
}
/*
int	main(void)
{
	ft_print_comb2();
}
*/