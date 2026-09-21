#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int	ft_lwrd(char *c, char *charset)
{
    int	i;
	int	j;

	j = 0;
    i = 0;
    while (charset[j] && c[i])
    {
        if (c[i] == charset[j])
            j++;
		else
			j = 0;
        i++;
    }
    return (i);
}
int	ft_qwrds(char *haystack, char *needle, int o)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	if (needle[0] == '\0')
		return (0);
	while (haystack[i])
	{
		j = 0;
		while (haystack[i + j] == needle[j] && needle[j])
			j++;
		if (needle[j] == '\0' && haystack[i + j] != '\0')
			o++;
		i++;
	}
	return (o);
}

char	*ft_setwrd(char *haystack, char *needle, int lwrd)
{
	int		i;
	char	*vector;

	i = 0;
	if (needle[0] == '\0')
		return (NULL);
	vector = (char *)malloc(sizeof(char) * (lwrd));
	if (!vector)
		return (NULL);
	while (i < lwrd)
	{
		vector[i] = haystack[i];
		i++;
	}
	vector[i] = '\0';
	return (vector);
}

char	**ft_split(char *str, char *charset)
{
	char	**matrix;
	int		lwrd;
	int		qwrds;
	int 	k;

	if (!str || !charset)
		return (NULL);
	qwrds = ft_qwrds(str, charset, 1);
	printf("qwrds: %d.\n", qwrds);
	matrix = (char **)malloc(sizeof(char *) * (qwrds));
	if (!matrix)
		return (NULL);
	lwrd = 0;
	k = 0;
	while (k <= qwrds)
	{
		printf("k: %d.\n", k);
		lwrd = ft_lwrd(str, charset);
		matrix[k] = ft_setwrd(str, charset, lwrd);
		str += lwrd;
		k++;
	}
	matrix[k] = NULL;
	return (matrix);
}

int main(void)
{
	char *unsplit = "Hallo, wie bist du? Ich bin gut, danke, für fragen Hallo";
	char **ptr = ft_split(unsplit, "Hallo");
	int i = 0;
	while (ptr[i] != NULL)
	{
		printf("ptr[%d]:%s...\n", i, ptr[i]);
		i++;
	}
}