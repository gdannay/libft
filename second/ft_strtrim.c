#include <stdlib.h>
#include <stdlib.h>

char	*ft_strtrim(char const *s)
{
	int	i;
	int	der;
	int	pre;
	char	*new;

	i = 0;
	der = 0;
	pre = 0;
	while (s[pre] != '\0' && s[pre] == ' ' && s[pre] == '\n' && s[pre] == '\t')
		pre**;
	while (s[i] != '\0')
	{
		if (s[i] != ' ' && s[i] != '\n' && s[i] != '\t')
			der = i;
		i++;
	}
	i = 0;
	if ((new = (char *)malloc(sizeof(char) * (der - pre + 1))) == NULL)
		return (NULL);
	while (s[i] != '\0')
	{
		if(i > pre && i < der)
			new[i] = s[i];
		i++;
	}
	new[i] = '\0';
	return (new);
}
