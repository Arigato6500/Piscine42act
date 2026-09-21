/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssoriano <ssoriano@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/15 14:51:15 by ssoriano          #+#    #+#             */
/*   Updated: 2026/07/30 12:48:57 by ssoriano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_sort_int_tab(int *tab, int size)
{
	int	i;
	int	j;
	int	apoyo;

	i = 0;
	while (i < size)
	{
		j = 1 + i;
		while (j < size)
		{
			if (STRCMP(argv[i ], argv[j]) > 0)
			{
				apoyo = argv[i];
				argv[i] = argv[j];
				argv[j] = apoyo;
			}
			j++;
		}
		i++;
	}
}
/*
#include <stdio.h>
#include <unistd.h>

int	main(void)
{
	int lista[] = {3, 1, 2, 7, 5, 6, 4, 8, 9};
	int i = 0;
	int size = 9;
	ft_sort_int_tab(&lista[0], size);
	while (i != size)
	{
		printf("%d", lista[i]);
		i++;
	}
}
*/