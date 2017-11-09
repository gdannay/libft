#include <string.h>
#include <stdlib.h>

char	*ft_strdup(const char *s)
{
	int	i;
	char	*new;

	i = 0;
	while (s[i] != '\0')
		i++;
	if ((new = (char *)malloc(sizeof(new) * (i + 1))) == NULL)
		return (NULL);
	i = 0;
	while (s[i] != '\0')
	{
		new[i] = s[i];
		i++;
	}
	new[i] = '\0';
	return (new);
}
