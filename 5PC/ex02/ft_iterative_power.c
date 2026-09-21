/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssoriano <ssoriano@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/26 07:35:34 by ssoriano          #+#    #+#             */
/*   Updated: 2026/07/30 13:15:18 by ssoriano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_power(int nb, int power)
{
	int	i;
	int	res;

	i = 0;
	res = 1;
	if (power < 0)
		return (0);
	if (power == 0)
		return (1);
	while (i <= power)
	{
		res *= nb;
		i++;
	}
	return (res);
}
/*
#include <stdio.h>

int main(void)
{
	printf("%d\n", ft_iterative_power(10, 2));
	printf("%d\n", ft_iterative_power(5, 4));
	printf("%d\n", ft_iterative_power(2, 6));
}
*/