#include <string.h>

char	*ft_strstr(const char *str, const char *need)
{
	int	i;
	int	j;
	int	k;

	i = 0;
	j = 0;
	k = 0;
	while (str[i] != '\0')
	{
		while (str[i + k] == need[j])
		{	
			k++;
			j++;
		}
		if (need[j] == '\0')
			return (str + i);
		k = 0;
		j = 0;
		i++;
	}
	return (NULL);
}
