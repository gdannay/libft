#include <stdlib.c>

void	ft_memdel(void **ap)
{
	free(**ap);
	*ap = NULL;
}
