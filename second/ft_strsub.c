#include <string.h>
#include <stdlib.h>

char	*ft_srsub(char const *s, unsigned int start, size_t len)
{
	size_t	i;
	char	*new;

	i = (size_t)start;
	if ((new = (char *)malloc(sizeof(char) * len)) == NULL)
		return (NULL);
	while (i < len)
	{
		new[i] = s[i];
		i++;
	}
	return (new);
}
