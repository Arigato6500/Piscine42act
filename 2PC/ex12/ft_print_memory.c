/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_memory.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssoriano <ssoriano@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/21 10:44:20 by ssoriano          #+#    #+#             */
/*   Updated: 2026/07/28 16:42:22 by ssoriano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_todohexa(char *str, unsigned int size)
{
	unsigned int	i;
	char			*hex;

	i = 0;
	hex = "0123456789abcdef";
	while (i < size)
	{
		write(1, &hex[(str[i] / 16)], 1);
		write(1, &hex[(str[i] % 16)], 1);
		if (i % 2 != 0)
			write(1, " ", 1);
		i++;
	}
	write(1, " ", 1);
}

void	ft_conpuntos(char *str, unsigned int size)
{
	unsigned int	i;

	i = 0;
	while (i < size && str[i] != '\0')
	{
		if (str[i] >= 32 && str[i] <= 126)
			write(1, &str[i], 1);
		else
			write(1, ".", 1);
		i++;
	}
}

void	*ft_print_memory(void *addr, unsigned int size)
{
	char			*hex;
	int				num;
	unsigned int	i;
	unsigned long	caddr;

	i = 0;
	hex = "0123456789abcdef";
	caddr = (unsigned long)addr;
	if (size == 0)
		return (void);
	while (i < size)
	{
		num = (caddr >> (i * 4)) & 0xF;
		write(1, &hex[num], 1);
		i++;
	}
	write(1, ": ", 2);
	ft_todohexa(addr, size);
	ft_conpuntos(addr, size);
	return (addr);
}
/*
int main(void)
{
	char lista[] = "La ma\n\n\ncarena, la macarena \n lalalalla";
	ft_print_memory(lista, 16);
}
*/