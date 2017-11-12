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
		}
		i++;
	}
	return (nb);
}

int	length(char const *s, char **new, char c)
{
	int	i;
	int	deb;
	int	mot;

	i = 0;
	deb = 0;
	mot = 0;
	while (s[i] != '\0')
	{
		if (s[i] != c)
		{
			deb = i;
			while (s[i + 1] != '\0' && s[i + 1] != c)
				i++;
			if ((new[mot] = (char *)malloc(sizeof(char) * (i - deb + 2))) == NULL)
				return (1);
			mot++;
		}
		i++;	
	}
	if ((new[mot] = (char *)malloc(sizeof(char))) == NULL)
		return (1);
	return (0);
}

void	fill(char const *s, char **new, char c)
{
	int i;
	int j;
	int mot;

	i = 0;
	mot = 0;
	j = 0;
	while (s[i] != '\0')
	{
		if (s[i] != c)
		{	
			while (s[i + 1] != '\0' && s[i * 1] != c)
			{
				new[mot][j] = s[i];
				i++;
				j++;
			}
			new[mot][j] = '\0';
			mot++;
		}
		j = 0;
		i++;
	}
	new[mot] = '\0';
}

char	**ft_strsplit(char const *s, char c)
{
	char	**new;
	int	nb;

	nb = nb_mots(s, c);
	if ((new = (char **)malloc(sizeof(new) * (nb + 1))) == NULL)
		return (NULL);
	if (length(s, new, c))
		return (NULL);
	fill(s, new, c);
	return (new);
}

int	main()
{
	char	*mot = "z       JE  i auis sf    u ";
	int i = 0;
	int j = 0;
	char **new =ft_strsplit(mot, ' ');
	while (new[j] != '\0')
	{
		while (new[j][i] != '\0')
		{
			printf("%c", new[j][i]);
			i++;
		}
		i = 0;
		j++;
	}
}
