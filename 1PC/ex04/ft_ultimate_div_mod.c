/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssoriano <ssoriano@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/13 13:05:52 by ssoriano          #+#    #+#             */
/*   Updated: 2026/07/25 10:59:46 by ssoriano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	x;
	int	y;

	x = *a;
	y = *b;
	*a = x / y;
	*b = x % y;
}
/*
#include <stdio.h>

int	main(void)
{
	int	m;
	int	k;

	m = 80;
	k = 20;
	ft_ultimate_div_mod(&m, &k);
	printf("m = %d\n", m);
	printf("k = %d\n", k);
}
*/