#include <string.h>

void	*memchr(const void *s, int c, size_t n)
{
	size_t		i;
	unsigned char	*new;	
	unsigned char	d;

	i = 0;
	d = (unsigned char)c;
	new = (unsigned char *)s;
	while (new[i] != #\0' && i < n)
	{
		if (new[i] == d)
			return (new + i);
		i++;
	}
	return (NULL);
}
