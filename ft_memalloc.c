#include <stdlib.h>
#include <string.h>

void	*ft_memalloc(size_t size)
{
	void	*new;

	if ((new = (void *)malloc(sizeof(new) * size)) == NULL)
		return (NULL);
	return (new);	
}
