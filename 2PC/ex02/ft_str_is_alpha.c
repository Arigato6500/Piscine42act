/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssoriano <ssoriano@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/16 15:29:04 by ssoriano          #+#    #+#             */
/*   Updated: 2026/07/28 11:33:33 by ssoriano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_alpha(char *str)
{
	int	o;

	o = 0;
	while (str[o])
	{
		if (!((str[o] >= 'a' && str[o] <= 'z')
				|| (str[o] >= 'A' && str[o] <= 'Z')))
			return (0);
		o++;
	}
	return (1);
}
/*
#include <unistd.h>
#include <stdio.h>

int main(void)
{
    char *tests[] = {
        "Hola",
        "HelloWorld",
        "abcXYZ",
        "abc123",
        "123",
        "Hola!",
        "",
        "aBcDeF",
        " ",
        "Test42",
        NULL
    };

    int i = 0;

    while (tests[i] != NULL)
    {
        printf("ft_str_is_alpha(\"%s\") = %d\n",
               tests[i], ft_str_is_alpha(tests[i]));
        i++;
    }

    return (0);
}
*/