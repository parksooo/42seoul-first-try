char	ft_strcopy(char *dest, char *src)
{
	int i;
	i = 0;
	while(str[i])
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0'
	return(dest);
}


