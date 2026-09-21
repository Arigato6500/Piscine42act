/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssoriano <ssoriano@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/30 00:50:58 by ssoriano          #+#    #+#             */
/*   Updated: 2026/07/30 10:05:25 by ssoriano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_rev_base(char *base)
{
	int	i;
	int	j;

	i = 0;
	if (base[0] == '\0' || base[1] == '\0')
		return (0);
	while (base[i])
	{
		j = i + 1;
		while (base[j])
		{
			if ((base[i] == base[j] || base[i] == '+'
					|| base[i] == '-'))
				return (0);
			j++;
		}
		i++;
	}
	return (1);
}

int	ft_snb(char *base, char *src)
{
	int	j;

	j = 0;
	while (base[j])
	{
		if (src[0] == base[j])
			return (1);
		j++;
	}
	return (0);
}

int	get_value(char c, char *base)
{
	int	i;

	i = 0;
	while (base[i])
	{
		if (base[i] == c)
			return (i);
		i++;
	}
	return (-1);
}

int	ft_atoi_base2(char *str, char *base)
{
	int	val;
	int	len;
	int	i;

	i = 0;
	len = 0;
	while (base[len])
		len++;
	val = 0;
	while (ft_snb(base, &str[i])
		&& ((str[i] > '9' && str[i] < '0') || str[i] != '\0'))
	{
		val = (val * len) + get_value(str[i], base);
		i++;
	}
	return (val);
}

int	ft_atoi_base(char *str, char *base)
{
	int	i;
	int	ptn;

	ptn = 1;
	i = 0;
	if (!ft_rev_base(base))
		return (0);
	while (str[i] == ' ' || (str[i] >= 9 && str[i] <= 13))
		i++;
	while (str[i] == '+' || str[i] == '-')
	{
		if (str[i] == '-')
			ptn *= -1;
		i++;
	}
	return (ft_atoi_base2(&str[i], base));
}

#include <stdio.h>

int main(void)
{
	printf("%d\n", ft_atoi_base("   --++++-+-101K0001", "01"));
	printf("%d\n",ft_atoi_base(" -+---abwc", "0123456789abcdef"));
	printf("%d\n", ft_atoi_base("625", "01234567"));
	printf("%d\n",ft_atoi_base(" -+---abcw", ""));
}