/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssoriano <ssoriano@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/20 14:26:20 by ssoriano          #+#    #+#             */
/*   Updated: 2026/07/28 16:51:21 by ssoriano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

char	*ft_strncat(char *dest, char *src, unsigned int n)
{
	unsigned int		isrc;
	unsigned int		jdest;

	isrc = 0;
	jdest = 0;
	while (dest[jdest] != '\0')
		jdest++;
	while (src[isrc] && isrc != n)
	{
		dest[jdest] = src[isrc];
		jdest++;
		isrc++;
	}
	dest[jdest] = '\0';
	return (dest);
}

/*
int main(void)
{

    char *tests[] = {
        " 0? ",
        "11 ",
        "222 ",
        "3333 ",
        "44444 ",
        "5 ",
        " ",
        "666666666 ",
        ".",
        "Test42",
        NULL
    };
	char dest[50] = "Hola";
    int i = 0;

    while (tests[i] != NULL)
    {
		ft_strncat(dest, tests[i], 4);
        printf("dest = %s\n", dest);
        i++;
    }

    return (0);
}
*/