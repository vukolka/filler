#include <libft.h>
#include "../filler.h"

extern t_settings *state;

int		*get_the_further(int i, int j)
{
	int x;
	int y;
	int prex;
	int prey;
	int *res;

	prex = 0;
	prey = 0;
	x = 0;
	y = 0;
	while (state->map[x])
	{
		while (x < state->rows && state->map[x][y])
		{
			if (state->map[x][y] == '.')
			{
				if (!is_better(x, y, prex, prey, (int[]) {i, j}))
				{
					prex = x;
					prey = y;
				}
			}
			y++;
		}
		y = 0;
		x++;
	}
	res = malloc (8);
	res[0] = prex;
	res[1] = prey;
	return (res);
}

int		*get_direction()
{
	int x;
	int y;
	int avaragex;
	int avaragey;
	int count;

	avaragey = 0;
	avaragex = 0;
	count = 0;
	x = 0;
	y = 0;
	while (x < state->rows&& state->map[x])
	{
		while (state->map[x][y])
		{
			if (state->map[x][y] == PLAYER ||
				state->map[x][y] == PLAYER - 32)
			{
				avaragex += x;
				avaragey += y;
				count++;
			}
			y++;
		}
		y = 0;
		x++;
	}
	avaragex = avaragex / count;
	avaragey = avaragey / count;
	return (get_the_further(avaragex, avaragey));

}
