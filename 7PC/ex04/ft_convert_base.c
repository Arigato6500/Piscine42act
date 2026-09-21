#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int	ft_atoi_base(char *str, char *base);
int	ft_rev_base(char *base);

int	ft_numTobaseLen(long number, int baselen, int lenght)
{
	if (number > baselen - 1)
		ft_numTobaseLen(number / baselen, baselen, lenght + 1);
	else
		return (lenght);
}

void	ft_reTraduct(char *result, char *base, int num, int baselen)
{
	if (num > baselen - 1)
		ft_reTraduct(result - 1, base, num / baselen, baselen);
	*result = base[num % baselen];
}

char *ft_convert_base(char *nbr, char *base_from, char *base_to)
{
	int		num;
	int		numlen;
	int		sign;
	int		baselen;
	char	*result;

	baselen = ft_rev_base(base_to);
	if (ft_rev_base(base_from) < 2 || baselen < 2)
		return (NULL);
	num = ft_atoi_base(nbr, base_from);
	sign = 0;
	if (num < 0)
	{
		sign = 1;
		num = -num;
	}
	numlen = sizeof(*result) * ft_numTobaseLen(num, baselen, 1) + sign;
	result = (char *)malloc(numlen);
	if (sign)
	{
		*result = '-';
		result++;
	}
	ft_reTraduct(result + numlen - 1 - sign, base_to, num, baselen);
	return (result- sign);

}

int main(void)
{ 
	char *lol = ft_convert_base("-101010100011101100110110", "01", "0123456789abcdef");
	printf("%s\n", lol);
}