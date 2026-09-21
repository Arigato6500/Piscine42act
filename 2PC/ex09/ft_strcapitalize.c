/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssoriano <ssoriano@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/17 11:08:08 by ssoriano          #+#    #+#             */
/*   Updated: 2026/07/28 11:34:44 by ssoriano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcapitalize(char *str)
{
	int		i;
	int		o;

	i = 0;
	o = 1;
	while (str[i] != '\0')
	{
		if (o && str[i] >= 'a' && str[i] <= 'z')
			str[i] = str[i] - 32;
		else if (!o && str[i] >= 'A' && str[i] <= 'Z')
			str[i] = str[i] + 32;
		if ((str[i] >= 'a' && str[i] <= 'z')
			|| (str[i] >= 'A' && str[i] <= 'Z')
			|| (str[i] >= '0' && str[i] <= '9'))
			o = 0;
		else
			o = 1;
		i++;
	}
	return (str);
}
/*
#include <unistd.h>
#include <stdio.h>

int main(void)
{
    char test1[] = "haLLo mein+frEund fl0Wery";
	char test2[] = "9aa41aaa";
	char test3[] = "";
	char test4[] = "NIE";
	char test5[] = "mand";
	char test6[] = "FLORIAAAAAAN";

	char *tests[] = {test1, test2, test3, test4, test5, test6, NULL};
	int i = 0;
	while (tests[i] != NULL)
    {
        printf("ft_strupcase(\"%s\") = \"%s\"\n",
               tests[i], ft_strcapitalize(tests[i]));
        i++;
    }

    return (0);
}
*/