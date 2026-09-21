/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssoriano <ssoriano@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/15 12:30:27 by ssoriano          #+#    #+#             */
/*   Updated: 2026/07/27 15:36:13 by ssoriano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_rev_int_tab(int *tab, int size)
{
	int	i;
	int	apoyo;
	int	asize;

	i = 0;
	asize = size - 1;
	while (i < (size / 2))
	{
		apoyo = tab[i];
		tab[i] = tab[asize];
		tab[asize] = apoyo;
		asize--;
		i++;
	}
}
/*
#include <stdio.h>
#include <unistd.h>

int	main(void)
{
	int	i;
	int	size;
	int	tab[] = {1, 2, 3, 4, 5, 6, 7, 8};

	size = 8;
	ft_rev_int_tab(&tab[0], size);
	i = 0;
	while (i <= size - 1)
	{
		printf("%d", tab[i]);
		i++;
	}
}
*/