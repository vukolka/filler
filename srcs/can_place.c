#include <wchar.h>
#include <stdlib.h>
#include "../filler.h"

extern t_settings state;

int 	can_place_current(int x, int y, int corneri, int cornerj)
{
	char **piece;
	int	placed;
	int i;
	int j;

	i = 0;
	j = 0;
	placed = 0;
	piece = state.piece;
	while (piece[i])
	{
		while (piece[i][j])
		{
			if (piece[i][j] == '*')
			{
				if (i + corneri < 0 || j + cornerj < 0)
					return (0);
				if (placed && state.map[x + corneri][y + cornerj] == 'X')
					return (0);
				else if (state.map[x + corneri][y + cornerj] == 'X')
					placed = 1;
			}
			j++;
			cornerj++;
		}
		cornerj -= j;
		j = 0;
		i++;
		corneri++;
	}
	return (1);
}

int 	*can_place(int i, int j)
{
	int x;
	int y;

	x = 0;
	y = 0;
	int *res = malloc(8);
	while (state.piece[x]) {
		while (state.piece[x][y]) {
			if (state.piece[x][y] == '*')
				if (can_place_current(i, j, -x, -y))
				{
					res[0] = i - x;
					res[1] = j - y;
					return (res);
				}
			y++;
		}
		y = 0;
		x++;
	}
	return (NULL);
}