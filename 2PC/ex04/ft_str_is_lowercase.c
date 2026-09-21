/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssoriano <ssoriano@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/17 08:53:59 by ssoriano          #+#    #+#             */
/*   Updated: 2026/07/28 11:33:56 by ssoriano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_lowercase(char *str)
{
	int		o;

	o = 0;
	while (str[o])
	{
		if (str[o] < 'a' || str[o] > 'z')
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
	char		*tests[] = {
		"9984984",
		"9aa41aaa",
		"",
		"NIE",
		"mand",
		NULL
	};
	int i = 0;
	while (tests[i] != NULL)
    {
        printf("ft_str_is_alpha(\"%s\") = %d\n",
               tests[i], ft_str_is_lowercase(tests[i]));
        i++;
    }

    return (0);
}
*/