
#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

char		*ft_strcat(char *dest, char *src)
{
	while (*src)
	{
		*dest++ = *src++;
	}
	return (dest);
}

long long	ft_strlen(char *str)
{
	long long	length;

	length = 0;
	while (*str++)
		length++;
	return (length);
}

char		*empty_string(void)
{
	char *str;

	str = (char*)malloc(sizeof(*str));
	*str = '\0';
	return (str);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char	*str;
	char	*aux;
	int		index;
	long long	total;
	if (!size)
		return (empty_string());
	while (index < size)
		total += ft_strlen(strs[index++]);
	str = (char *)malloc(total + ft_strlen(sep));
	aux = ft_strcat(str, strs[0]);
	index = 1;
	while (index < size)
	{
		aux = ft_strcat(aux, sep);
		aux = ft_strcat(aux, strs[index++]);
	}
	*aux = '\0';
	return (str);
}

int main(void)
{
	int		i = 0;
	char	**strs = (char *[]){"Hola", "carlos", "eres", "gay?\n"};
	char	*sep = " ";
	char	*con = ft_strjoin(4, strs, sep);
	printf("%s", con);
}
