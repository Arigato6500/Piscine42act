/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssoriano <ssoriano@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/16 18:13:43 by ssoriano          #+#    #+#             */
/*   Updated: 2026/07/28 11:31:55 by ssoriano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_numeric(char *str)
{
	int		o;

	o = 0;
	while (str[o])
	{
		if (str[o] < '0' || str[o] > '9')
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
		NULL
	};
	int i = 0;
	while (tests[i] != NULL)
    {
        printf("ft_str_is_alpha(\"%s\") = %d\n",
               tests[i], ft_str_is_numeric(tests[i]));
        i++;
    }

    return (0);
}
*/