/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_numbers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssoriano <ssoriano@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/09 15:46:51 by ssoriano          #+#    #+#             */
/*   Updated: 2026/07/12 18:46:16 by ssoriano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_numbers(void)
{
	char	alfabeto;

	alfabeto = '0';
	while (alfabeto != ':')
	{
		write(1, &alfabeto, 1);
		alfabeto++;
	}
}
