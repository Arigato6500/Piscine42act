/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fibonacci.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssoriano <ssoriano@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/26 07:42:22 by ssoriano          #+#    #+#             */
/*   Updated: 2026/07/30 14:53:22 by ssoriano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_fibonacci(int index)
{
	int	i;
	int	eins;
	int	swei;
	int	aux;

	i = 0;
	eins = 0;
	swei = 1;
	while (i < index)
	{
		aux = eins + swei;
		eins = swei;
		swei = aux;
		i++;
	}
	return (eins);
}

// #include <stdio.h>

// int	main(void)
// {
// 	printf("%d\n", ft_fibonacci(2));
// 	printf("%d\n", ft_fibonacci(2));
// }
