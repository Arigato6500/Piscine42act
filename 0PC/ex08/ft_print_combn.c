/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_combn.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssoriano <ssoriano@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/15 09:45:38 by ssoriano          #+#    #+#             */
/*   Updated: 2026/07/22 16:42:44 by ssoriano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_combn(int ct)
{
	int		max_cantidad[10];
	int		i;
	char	c;

	i = -1;
	while (++i < ct)
		max_cantidad[i] = i;
	while (max_cantidad[0] <= 10 - ct && ct > 0 && ct < 10)
	{
		i = -1;
		while (++i < ct)
		{
			c = max_cantidad[i] + '0';
			write(1, &c, 1);
		}
		if (max_cantidad[0] == 10 - ct)
			break ;
		write(1, ", ", 2);
		i = ct - 1;
		while (i >= 0 && max_cantidad[i] == 10 - ct + i)
			i--;
		max_cantidad[i]++;
		while (++i < ct)
			max_cantidad[i] = max_cantidad[i - 1] + 1;
	}
}
/*
int	main(void)
{
	ft_print_combn(9);
	return (0);
}
*/