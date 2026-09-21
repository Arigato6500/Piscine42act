/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssoriano <ssoriano@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/29 20:21:12 by ssoriano          #+#    #+#             */
/*   Updated: 2026/07/30 11:16:16 by ssoriano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strdup(char *src)
{
	int		len;
	int		i;
	char	*x;

	len = 0;
	i = 0;
	while (src[len])
		len++;
	x = malloc((sizeof(char) * len) + 1);
	if (x == NULL)
		return (NULL);
	while (src[i])
	{
		x[i] = src[i];
		i++;
	}
	x[i] == '\0';
	return (x);
}
/*
#include <string.h>
#include <stdio.h>
int main(void)
{
	char *original = "Holxddda";
	char *copia = ft_strdup(original);

	printf("%s\n", copia);
}
*/