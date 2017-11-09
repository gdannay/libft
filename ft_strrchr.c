#include <string.h>

char	*ft_strrchr(const char *s, int c)
{
	int		i;
	int		j;
	unsigned char	b;

	i = 0;
	b = (unsigned char)c;
	while (s[i] != '\0')
	{
		if (s[i] == b)
			j = i;
		i++;
	}
	if (j == 0)
		return (NULL);
	return (s + j);
}
