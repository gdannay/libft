#include <stdlib.h>
#include <string.h>
#include <stdio.h>

int	nb_mots(char const *s, char c)
{
	int	i;
	int	nb;

	i = 0;
	nb = 0;
	while (s[i] != '\0')
	{
		if (s[i] != c)
		{
			while (s[i + 1] != '\0' && s[i + 1] != c)
				i++;
			nb++;
			printf("%d, %d,  %c\n", nb, i, s[s - 1]);
		}
		i++;
	}
	return (nb);
}

char	**ft_strsplit(char const *s, char c)
{
	char	**new;
	
	if ((new = (char *)malloc(sizeof(char) * (nb_mots(s, c) + 1))) == NULL)
		return (NULL);
	
	
}

int	main()
{
	printf("%d", nb_mots("       JE   auis sf    u ", ' ' ));
}
