/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssoriano <ssoriano@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/17 12:14:32 by ssoriano          #+#    #+#             */
/*   Updated: 2026/07/28 22:25:35 by ssoriano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strcmp(char *s1, char *s2)
{
	int		i;
	int		m;

	i = 0;
	m = 0;
	while (s1[i] == s2[i] && s1[i] != '\0')
		i++;
	return (s1[i] - s2[i]);
}
/*
#include <unistd.h>
#include <stdio.h>
#include <string.h>
int main(void)
{
	char m[] = "Hol";
	char l[] = "Holaaaa";
	printf("%d\n", ft_strcmp(m, l));
}
*/