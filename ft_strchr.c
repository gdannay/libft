#include <string.h>

char	*ft_strchr(const char *s, int c)
{
	int		i;
	unsigned char	b;

	i = 0;
	b = (unsigned char)c;
	while (s[i] != b)
		i++;
	if (s[i] == '\0')
		return (NULL);
	return (s + i);
}
