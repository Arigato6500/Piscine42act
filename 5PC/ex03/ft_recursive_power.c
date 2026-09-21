/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssoriano <ssoriano@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/26 08:04:18 by ssoriano          #+#    #+#             */
/*   Updated: 2026/07/30 14:32:27 by ssoriano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_power(int nb, int power)
{
	int	i;

	i = 0;
	if (power < 0)
		return (0);
	else if (power == 0)
		return (1);
	else
		return (nb * ft_recursive_power(nb, power - 1));
}

// #include <stdio.h>

// int main(void)
// {
// 	printf("%d\n", ft_recursive_power(10, -2));
// 	printf("%d\n", ft_recursive_power(5, 0));
// 	printf("%d\n", ft_recursive_power(2, 6));
// }
