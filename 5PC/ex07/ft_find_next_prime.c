/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssoriano <ssoriano@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/26 09:20:23 by ssoriano          #+#    #+#             */
/*   Updated: 2026/07/30 14:55:27 by ssoriano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_search_prime(int prime)
{
	int	i;

	i = 2;
	if (nb <= 1)
		return (0);
	while ((i * i) <= nb)
	{
		if (nb % i == 0)
			return (0);
		i++;
	}
	return (1);
}

int	ft_find_next_prime(int nb)
{
	int	primo;

	while (!ft_search_prime(nb + primo))
		primo += 1;
	return (nb + primo);
}

// #include <stdio.h>

// int main(void)
// {
// 	printf("%d\n", ft_find_next_prime(3));
// }
