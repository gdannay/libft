char	*fill(long nb, char *new, int taille)
{
	if (nb > 10)
		return (fill(nb % 10, new, taille--);
	if (nb > 0)
		return 
}

char	*ft_itoa(int n)
{
	int	taille;
	long	nb;
	char	*new;

	nb = n;
	taille = 0;
	while (n)
	{
		n /= 10;
		taille++;
	}
	if (nb <= 0)
		taille++;
	if ((new = (char *)malloc(sizeof(char) * (taille))) == NULL)
		return (NULL);
	if (nb < 0)
	{
		new[0] = '-';
		nb *= -1;
		taille--;
	}
}


int	main()
{
	return (0);
}
