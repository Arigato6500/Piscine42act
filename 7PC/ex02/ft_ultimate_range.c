int ft_ultimate_range(int **range, int min, int max)
{
    int *aval; //All VALues
	int *sval; //Set VALues

	if (min >= max)
		return (0);
	aval = malloc((sizeof(int) * (max)));
	if (!aval)
		return (-1);
	while (min < max)
		*sval++ = min++;
	return (aval);
}

/*
#include <string.h>
#include <stdio.h>

int main(void)
{
	int i;
	int *x;
	int o;
	i = 0;
	o = 0;
	x = ft_range(1, o);
	while (i != o)
	{
		printf("%i", x[i]);
		i++;
	}
	free(x);
}
*/