char	*get_one_line(char *stash)
{
	char	*line;
	int		i;

	if (!stash)
		return (NULL);
	i = 0;
	while (stash[i] && stash[i] != '\n')
		++i;
	line = malloc(i + 2);
	if (!line)
		return (NULL);
	i = 0;
	while (stash[i] && stash[i] != '\n')
	{
		line[i] = stash[i];
		i++;
	}
	if (stash[i] == '\n')
		line[i++] = '\n';
	line[i] = '\0';
	return (line);
}

char	*free_stash(char *reserve)
{
	char	*stash;
	int		i;
	int		j;

	if (!reserve)
		return (NULL);
	i = 0;
	j = 0;
	while (reserve[i] != '\n' && reserve[i])
		++i;
	if (!reserve[i] || (reserve[i] == '\n' && reserve[i + 1] == '\0'))
	{
		free(reserve);
		return (NULL);
	}
	stash = malloc((ft_strlen(reserve) - i));
	if (stash)
	{
		while (reserve[++i])
			stash[j++] = reserve[i];
		stash[j] = '\0';
	}
	free(reserve);
	return (stash);
}
