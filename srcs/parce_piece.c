void	get_corners(char **piece, int *x, int *y)
{
	int i;
	int j;

	i = 0;
	j = 0;
	while (piece[i]) {
		while (piece[i][j])
		{
			if (piece[i][j] == '*')
			{
				*x = i;
				*y = j;
				return ;
			}
			j++;
		}
		j = 0;
		i++;
	}
	*x = -42;
	*y = -42;
}
