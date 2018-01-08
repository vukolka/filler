#include <stdio.h>
#include <fcntl.h>
#include <get_next_line.h>
#include <libft.h>
#include <ft_printf.h>
#include "../filler.h"

extern t_settings  state;

int		abs(int a)
{
	if (a < 0)
		return -a;
	return (a);
}

int 	is_better(int x, int y, int prex, int prey, int *dir)
{
	int was;
	int is;

	is = abs(dir[0] - x) + abs(dir[1] - y);
	was = abs(dir[0] - prex) + abs(dir[1] - prey);
	if (is < was)
		return (1);
	return (0);
}

t_list	*get_legal_moves()
{
	int 	x;
	int 	y;
	t_list	*legal_moves;
	int		*res;

	//ft_printf("%d\n", state.rows);
	legal_moves = NULL;
	x = 0;
	y = 0;
	while (state.map[x])
	{
		while (state.map[x][y])
		{
			if ((res = can_place(x, y)))
			{
				ft_lstadd(&legal_moves, ft_lstnew((int[]) {res[0], res[1]}, 8));
				free(res);
				res = NULL;
			}
			y++;
		}
		y = 0;
		x++;
	}
	return (legal_moves);
}

int		*get_the_further(int i, int j)
{
	int x;
	int y;
	int prex;
	int prey;

	prex = 0;
	prey = 0;
	x = 0;
	y = 0;
	while (state.map[x])
	{
		while (state.map[x][y])
		{
			if (state.map[x][y] == '.')
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
	return ((int[]){prex, prey});
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
	while (state.map[x])
	{
		while (state.map[x][y])
		{
			if (state.map[x][y] == PLAYER ||
				state.map[x][y] == PLAYER - 32)
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

void	make_move(t_list *legal_moves)
{
	t_list *head;

	int bestx;
	int besty;
	int *dir;

	dir = get_direction();
	bestx = ((int *)(legal_moves->content))[0];
	besty = ((int *)(legal_moves->content))[1];
	head = legal_moves;
	while (legal_moves)
	{
		if (is_better(((int *)legal_moves->content)[0],
				((int *) legal_moves->content)[1], bestx, besty, dir))
		{
			bestx = ((int *) legal_moves->content)[0];
			besty = ((int *) legal_moves->content)[1];
		}
		legal_moves = legal_moves->next;
	}
	ft_printf("%d %d\n", bestx, besty);
	free(head);
}

int 	gameloop()
{
	t_list *legal_moves;

	get_current_map();
	legal_moves = get_legal_moves();
	if (!legal_moves)
		exit(1);
	make_move(legal_moves);
	return (1);
}

int		main()
{
	while (gameloop())
		continue;
	return (0);
}
