/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssoriano <ssoriano@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/26 07:16:15 by ssoriano          #+#    #+#             */
/*   Updated: 2026/07/30 10:15:49 by ssoriano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int	i;
	int	numb;

	numb = 1;
	i = 1;
	if (nb < 0)
		return (0);
	while (i <= nb)
	{
		numb *= i;
		i++;
	}
	return (numb);
}

// #include <stdio.h>

// int main(void)
// {
// 	printf("%d\n", ft_iterative_factorial(10));
// 	printf("%d\n", ft_iterative_factorial(5));
// 	printf("%d\n", ft_iterative_factorial(2));
// 	return (0);

// }
