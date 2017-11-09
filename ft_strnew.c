#include <stdlib.h>
#include <string.h>

char	*ft_strnew(size_t size)
{
	size_t	i;
	char	*new;
	
	i = 0;
	if ((new = (char *)malloc(sizeof(new) * size)) == NULL)
		return (NULL);
	while (i < size)
	{
		new[i] = '\0'
		i++;
	}
	return (new);
}
