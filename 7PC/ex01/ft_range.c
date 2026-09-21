/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssoriano <ssoriano@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/30 11:02:23 by ssoriano          #+#    #+#             */
/*   Updated: 2026/07/30 15:19:34 by ssoriano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <unistd.h>

int *ft_range(int min, int max)
{
	int *aval; //All VALues
	int *sval; //Set VALues

	if (min >= max)
		return (0);
	aval = malloc((sizeof(int) * (max)));
	while (min < max)
		*sval++ = min++;
	return (aval);
}
/*
#include <string.h>
#include <stdio.h>

int main(void)
{
	int i;
	int *x;
	int o;
	i = 0;
	o = 10;
	x = ft_range(1, o);
	while (i != o)
	{
		printf("%i", x[i]);
		i++;
	}
	free(x);
}
*/