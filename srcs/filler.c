#include <stdio.h>
#include <fcntl.h>
#include <get_next_line.h>
#include <libft.h>
#include <ft_printf.h>
#include "../filler.h"

extern t_settings  *state;

void	free2d(char ***array_src)
{
	char **array;
	int i;

	array = *array_src;
	i = 0;
	while (array[i])
	{
		free(array[i]);
		i++;
	}
	free(array);
	*array_src = NULL;
}

void	free_map()
{
	free2d(&(state->map));
	free2d(&(state->piece));
}

int		abs(int a)
{
	if (a < 0)
		return -a;
	return (a);
}

int 	is_better(int x, int y, int prex, int prey, const int *dir)
{
	int was;
	int is;
	int dirx;
	int diry;

	dirx = dir[0];
	diry = dir[1];

	is = abs(dirx - x) + abs(diry - y);
	was = abs(dirx - prex) + abs(diry - prey);
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

	//ft_printf("%d\n", state->rows);
	legal_moves = NULL;
	x = 0;
	y = 0;
	while (state->map[x])
	{
		while (x < state->rows && state->map[x][y])
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


void	make_move(t_list *legal_moves)
{
	t_list *head;

	int bestx;
	int besty;
	int *dir;

	dir = get_direction();
//	ft_printf("dir: %d, %d\n",dir[0], dir[1]);
	bestx = ((int *)(legal_moves->content))[0];
	besty = ((int *)(legal_moves->content))[1];
	head = legal_moves;
	while (legal_moves)
	{
		if (is_better(((int *)legal_moves->content)[0],
				((int *) legal_moves->content)[1], bestx, besty, dir))
		{
//			ft_printf("dir: %d, %d\n",dir[0], dir[1]);
//			ft_printf("%d, %d\n",bestx, besty);
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
	{
		ft_printf("0 0\n");
		exit(1);
	}
	make_move(legal_moves);
	free_map();
	return (1);
}

int		main()
{
	state = malloc(sizeof(t_settings));
	while (gameloop())
		continue;
	return (0);
}
