/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssoriano <ssoriano@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/20 14:26:20 by ssoriano          #+#    #+#             */
/*   Updated: 2026/07/28 16:50:24 by ssoriano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

char	*ft_strcat(char *dest, char *src)
{
	unsigned int		isrc;
	unsigned int		jdest;

	isrc = 0;
	jdest = 0;
	while (dest[jdest] != '\0')
		jdest++;
	while (src[isrc])
	{
		dest[jdest] = src[isrc];
		jdest++;
		isrc++;
	}
	dest[jdest] = '\0';
	return (dest);
}
/*
Se sobreescribe el carácter nulo en dest permitiendo
que el array continue y se añade el texto de src
*/
/*
int main(void)
{

    char *tests[] = {
        "ginger? ",
        "HelloWorld ",
        "abcXYZ ",
        "abc123 ",
        "123 ",
        "Hola! ",
        "",
        "aBcDeF ",
        ".",
        "Test42",
        NULL
    };
	char dest[50] = "Hola";
    int i = 0;

    while (tests[i] != NULL)
    {
		ft_strcat(dest, tests[i]);
        printf("dest = %s\n", dest);
        i++;
    }

    return (0);
}
*/