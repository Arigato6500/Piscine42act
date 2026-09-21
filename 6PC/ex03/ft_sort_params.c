/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssoriano <ssoriano@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/29 16:33:55 by ssoriano          #+#    #+#             */
/*   Updated: 2026/07/30 14:13:24 by ssoriano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_strcmp(char *s1, char *s2)
{
	int		i;

	i = 0;
	while (s1[i] == s2[i] && s1[i] != '\0')
		i++;
	return (s1[i] - s2[i]);
}

void	ft_putstr(char *str)
{
	int		i;

	i = 0;
	while (str[i] != '\0')
	{
		write(1, &str[i], 1);
		i++;
	}
	write(1, "\n", 1);
}

int	main(int argc, char *argv[])
{
	int		i;
	int		j;
	char	*apoyo;

	i = 1;
	while (i < argc)
	{
		j = 1 + i;
		while (j < argc)
		{
			if (ft_strcmp(argv[i], argv[j]) > 0)
			{
				apoyo = argv[i];
				argv[i] = argv[j];
				argv[j] = apoyo;
			}
			j++;
		}
		i++;
	}
	i = 0;
	while (i++ < argc - 1)
		ft_putstr(argv[i]);
}
