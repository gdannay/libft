#include <string.h>

char	*ft_strnstr(const char *str, const char *need, size_t n)
{
	int	i;
	int	j;
	int	k;

	i = 0;
	j = 0;
	k = 0;
	while (str[i] != '\0' && i + k < n)
	{
		while (str[i + k] == need[j])
		{	
			k++;
			j++;
		}
		if (need[j] == '\0' && i + k < n)
			return (str + i);
		k = 0;
		j = 0;
		i++;
	}
	return (NULL);
}
