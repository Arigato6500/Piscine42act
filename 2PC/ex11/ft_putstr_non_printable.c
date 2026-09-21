/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssoriano <ssoriano@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/20 13:22:20 by ssoriano          #+#    #+#             */
/*   Updated: 2026/07/29 12:57:14 by ssoriano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_prt_non_prntbls(char *hex, unsigned char c)
{
	char	chex;

	write(1, "\\", 1);
	chex = hex[(c / 16)];
	write(1, &chex, 1);
	chex = hex[(c % 16)];
	write(1, &chex, 1);
}

void	ft_putstr_non_printable(char *str)
{
	unsigned char	c;
	char			*hex;
	int				i;

	i = 0;
	hex = "0123456789abcdef";
	while (str[i] != '\0')
	{
		c = (unsigned char)str[i];
		if (str[i] >= 32 && str[i] <= 126)
		{
			write(1, &c, 1);
		}
		else
			ft_prt_non_prntbls(hex, c);
		i++;
	}
}
/*
int	main(void)
{
	char	frase[] = "Hola\nQue tal?\tEsto es un test\x01 final.";

	ft_putstr_non_printable(frase);
}
*/