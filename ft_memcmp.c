#include <string.h>
#include <stdio.h>

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t		i;
	unsigned char	*a1;
	unsigned char	*a2;

	i = 0;
	a1 = (unsigned char *)s1;
	a2 = (unsigned char *)s2;
	while (a1[i] != '\0' && a2[i] != '\0' && a1[i] == a2[i])
		i++;
	if (a1[i} == a2[i]
		return (0);
	if (a1[i] < a2[i])
		return (-1);
	else
		return (1);
}

int	main()
{
	printf("%d", memcmp("AC", "BB", 2));
}
