/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssoriano <ssoriano@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/17 09:35:02 by ssoriano          #+#    #+#             */
/*   Updated: 2026/07/28 11:31:48 by ssoriano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int	ft_str_is_printable(char *str)
{
	int		o;

	o = 0;
	while (str[o])
	{
		if (str[o] < 32 || str[o] == 127)
			return (0);
		o++;
	}
	return (1);
}
/*
int main(void)
{
	char		*tests[] = {
		"9984984",
		"9aa41aaa",
		"",
		"ConTabulador\t9",
		"ConNuevaLinea\n10",
		"ConRetorno\r13",
		"ConCaracterEscape\x1b",
		"ConCaracterDEL\x7f"
		"NIE",
		"mand",
		"FLORIANNNNNNNNNN",
		NULL
	};
	int i = 0;
	while (tests[i] != NULL)
    {
        printf("ft_str_is_printable(\"%s\") = %d\n",
               tests[i], ft_str_is_printable(tests[i]));
        i++;
    }

    return (0);
}
*/