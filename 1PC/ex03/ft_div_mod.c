/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssoriano <ssoriano@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/13 12:35:06 by ssoriano          #+#    #+#             */
/*   Updated: 2026/07/25 10:59:47 by ssoriano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	if (b == 0)
		return ;
	*div = a / b;
	*mod = a % b;
}
/*
#include <stdio.h>
#include <unistd.h>

int	main(void)
{
	int s=0;
	int d=0;
	ft_div_mod(130, 10, &s, &d);
	printf("s = %d\n", s);
	printf("d = %d\n", d);
}
*/