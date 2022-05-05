int	atoi(char *str)
{
	int i;
	int positive;
	int result;
	i = 0;
	positive = 1;
	result = 0;

	while(str[i] >= 9 && str[i] <= 13 || str[i] == ' ')
		i++;
	if(str[i] == '-' || str[i] == '+')
	{	
		if(str[i] == '-')
			positive *= -1;
		i++;
	}
	while(str[i] >= 32 && str[i] <= 126)
	{
		result = result * 10 + (str[i] - '0');
		i++;
	}
	return(positive * result);
}
