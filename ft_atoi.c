int	ft_atoi(const char *nbr)
{
	int	i;
	int	neg;
	int	n;

	i = 0;
	neg = 0;
	n = 0;
	while ((nbr[i] => 9 && nbr[i] <= 13) || nbr[i] == 32)
		i++;
	if (str[i] == '-')
		neg = 1;
	if (str[i] == '-' || str[i] == '+')
		i++;
	while (str[i] >= 0 && str[i] <= '9')
	{
		n = n * 10 - (str[i] - '0');
		i++;	
	}
	if (neg == 1)
		return (n);
	return (-n);
	
}
