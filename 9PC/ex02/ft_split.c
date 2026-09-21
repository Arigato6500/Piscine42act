
#include <stdio.h>
#include <stdlib.h>
int ft_lwrd(char *str, char *charset)
{
	int	i;
	int	j;

	j = 0;
	i = 0;
	while (charset[j] && str[i])
	{
		if(str[i] == charset[j])
			j++;
		else
			j = 0;
		i++;
	}
	return (i);
}

int ft_qwrds(char *str, char *charset, int o)
{
	int	j;
	int	i;

	i = 0;
	j = 0;
	if (!charset)
		return (0);
	while (str[i])
	{
		j = 0;
		while (str[i + j] == charset[j] && charset[j])
			j++;
		if (charset[j] == '\0')
			o++;
		i++;
	}
	return (o);

}

char *ft_swrd(char *haystack, char *needle, int lwrd)
{
	char	*vector;
	int		i;

	i = 0;
	if (!*needle)
		return (NULL);
	vector = (char *)malloc(sizeof(char) * lwrd);
	while (i < lwrd)
	{
		vector[i] = haystack[i];
		i++;
	}
	vector[i] = '\0';
	return (vector);
}

char **ft_split(char *str, char *charset)
{
	char	**matrix;
	int		lwrd;
	int		qwrds;
	int		k;

	if (!str || !charset)
		return (NULL);
	qwrds = ft_qwrds(str, charset, 1);
	printf("qwrds: %d.\n", qwrds);
	matrix = (char **)(malloc(sizeof(char *) * qwrds));
	if (!matrix)
		return (NULL);
	lwrd = 0;
	k = 0;
	while (k < qwrds)
	{
		printf("k: %d.\n", k);
		lwrd = ft_lwrd(str, charset);
		matrix[k] = ft_swrd(str, charset, lwrd);
		str += lwrd;
		k++;
	}
	matrix[k] = NULL;
	return (matrix);
}

int main(void)
{
	char **splited = ft_split("Hallo nigger ¿Wie bist du? nigger, ich bin gut danke. nigger", "nigger");
	int i;

	i = 0;
	while (splited[i-1] != NULL)
	{
		printf("...%s...\n", splited[i]);
		i++;
	}
}