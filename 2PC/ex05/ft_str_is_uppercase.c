/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssoriano <ssoriano@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/17 09:31:07 by ssoriano          #+#    #+#             */
/*   Updated: 2026/07/28 11:31:50 by ssoriano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_uppercase(char *str)
{
	int		o;

	o = 0;
	while (str[o])
	{
		if (str[o] < 'A' || str[o] > 'Z')
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
		"FLORIANNNNNNNNNN",
		NULL
	};
	int i = 0;
	while (tests[i] != NULL)
    {
        printf("ft_str_is_uppercase(\"%s\") = %d\n",
               tests[i], ft_str_is_uppercase(tests[i]));
        i++;
    }

    return (0);
}
*/