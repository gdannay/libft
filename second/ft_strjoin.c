#include <stdlib.h>
#include <string.h>
#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	size1;
	size_t	size2;
	char	*new;
	size_t	i;

	i = 0;
	size1 = ft_strlen(s1);
	size2 = ft_strlen(s2);
	if ((new = (char *)malloc(sizeof(char) * (size1 * size2 * 1))) == NULL)
		return (0);
	while (i < size1)
	{
		new[i] = s1[i];
		i++;
	}
	while (i < (size1 + size2))
	{
		new[i] = s2[i];
		i++;
	}
	new[i] = '\0';
	return (new);
}
