/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   filler.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvukolov <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/09 04:10:20 by mvukolov          #+#    #+#             */
/*   Updated: 2018/01/09 04:10:21 by mvukolov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <fcntl.h>
#include <get_next_line.h>
#include <libft.h>
#include <ft_printf.h>
#include "../filler.h"

extern t_settings	*g_state;

t_list	*get_legal_moves(void)
{
	int		x;
	int		y;
	t_list	*legal_moves;
	int		*res;

	legal_moves = NULL;
	x = 0;
	y = 0;
	while (g_state->map[x])
	{
		while (x < g_state->rows && g_state->map[x][y])
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
	t_list	*head;
	int		bestx;
	int		besty;
	int		*dir;

	dir = get_direction(0, 0, 0, 0);
	bestx = ((int *)(legal_moves->content))[0];
	besty = ((int *)(legal_moves->content))[1];
	head = legal_moves;
	while (legal_moves)
	{
		if (is_better(legal_moves->content, bestx, besty, dir))
		{
			bestx = ((int *)legal_moves->content)[0];
			besty = ((int *)legal_moves->content)[1];
		}
		legal_moves = legal_moves->next;
	}
	ft_printf("%d %d\n", bestx, besty);
	free(head);
}

int		gameloop(void)
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

int		main(void)
{
	g_state = malloc(sizeof(t_settings));
	while (gameloop())
		continue;
	return (0);
}
