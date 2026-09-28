int	ft_string(char *str)
{
	int len;
	int counter;

	if (!str)
	{
		if (write(1, "(null)", 6) == -1)
			return (-1);
		return (6);
	}
	len = 0;
	counter = 0;
	while (str[counter])
	{
		if (write(1, &str[counter], 1) == -1)
			return (-1);
		len++;
		counter++;
	}
	return (len);
}
