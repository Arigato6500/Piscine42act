#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int	ft_rev_base(char *base)
{
	int	i;
	int	j;

	i = 0;
	
	while (base[i])
	{
		if (base[i] == '-' || base[i] == '+'|| base[i] == ' '
				|| (*base >= 9 && *base <= 13))
			return (0);
		j = i + 1;
		while (base[j++])
		{
			if (base[i] == base[j])
				return (0);
		}
		i++; 
	}
	return (i);
}

int	ft_snb(char c, char *base)
{
	while (*base)
	{
		if (c == *base)
			return (1);
		base++;
	}
	return (0);
}

int	get_indexValue(char c, char *base)
{
	int	index;

	index = 0;
	while (*base)
	{
		if (*base == c)
			return (index);
		base++;
		index++;
	}
	return (-1);
}

int	ft_atoi_base(char *str, char *base)
{
	int		i;
	int		ptn;
	int		val;

	ptn = 1;
	val = 0;
	i = ft_rev_base(base);
	if (i < 2)
		return (0);
	while (*str)
	{
		if (*str == '-')
			ptn *= -1;
		else if (ft_snb(*str, base))
		{
			while (ft_snb(*str, base))
			{
				val = (val * i) + get_indexValue(*str, base);
				str++;
			}
		}
		str++;
	}
	return (ptn * val);
}
/*
int main(void)
{
	printf("%d\n", ft_atoi_base("   -1010101", "01"));
	printf("%d\n",ft_atoi_base(" -+---abwc", "0113456789abcdef"));
	printf("%d\n", ft_atoi_base("625", "01234567-"));
	printf("%d\n",ft_atoi_base(" +---abcw", ""));
}
*/