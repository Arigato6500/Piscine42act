/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssoriano <ssoriano@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/26 08:36:25 by ssoriano          #+#    #+#             */
/*   Updated: 2026/07/30 14:53:51 by ssoriano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt(int nb)
{
	int	i;
	int	j;

	i = 0;
	j = (long)nb;
	if (j < 0)
		return (0);
	while (i * i <= j)
	{
		if (i * i == j)
			return (i);
		i++;
	}
	return (0);
}

// #include <stdio.h>

// int main(void)
// {
// 	printf("%d\n", ft_sqrt(9));
// 	printf("%d\n", ft_sqrt(25));
// 	printf("%d\n", ft_sqrt(900));
// }