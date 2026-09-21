/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   atoi.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssoriano <ssoriano@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/22 14:53:04 by ssoriano          #+#    #+#             */
/*   Updated: 2026/07/30 10:11:16 by ssoriano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_atoi(char *str)
{
	int	i;
	int	ptm;
	int	val;

	ptm = 1;
	val = 0;
	i = 0;
	while (str[i] == ' ' || (str[i] >= 9 && str[i] <= 13))
		i++;
	while (str[i] == '+' || str[i] == '-')
	{
		if (str[i] == '-')
			ptm *= -1;
		i++;
	}
	while ((str[i] > '9' && str[i] < '0') || str[i] != '\0')
	{
		val += (val * 10) + (str[i] - '0');
		i++;
	}
	return (val * ptm);
}
/*
#include <stdio.h>
#include <limits.h>

int	main(void)
{
	printf("%d\n", ft_atoi("-5"));
	printf("%d\n", ft_atoi("5"));
}
*/