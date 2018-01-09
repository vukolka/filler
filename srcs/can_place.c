/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   can_place.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvukolov <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/09 03:59:57 by mvukolov          #+#    #+#             */
/*   Updated: 2018/01/09 03:59:58 by mvukolov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <wchar.h>
#include <stdlib.h>
#include "../filler.h"

extern t_settings	*g_state;

int					if_placed(int x, int y, int *placed)
{
	if (x < 0 || y < 0
		|| x >= g_state->rows || y >= g_state->cols)
		return (0);
	if (g_state->map[x][y] == ENEMY - 32
		|| g_state->map[x][y] == ENEMY)
		return (0);
	if (*placed && (g_state->map[x][y] == PLAYER - 32
		|| g_state->map[x][y] == PLAYER))
		return (0);
	else if (g_state->map[x][y] == PLAYER
			|| g_state->map[x][y] == PLAYER - 32)
		*placed = 1;
	return (1);
}

int					can_place_current(int x, int y, int corneri, int cornerj)
{
	char	**piece;
	int		placed;
	int		i;
	int		j;

	i = 0;
	j = 0;
	placed = 0;
	piece = g_state->piece;
	while (piece[i])
	{
		while (piece[i][j])
		{
			if (piece[i][j] == '*')
				if (!if_placed(x - corneri + i, y - cornerj + j, &placed))
					return (0);
			j++;
		}
		j = 0;
		i++;
	}
	if (placed == 0)
		return (0);
	return (1);
}

int					*can_place(int i, int j)
{
	int x;
	int y;
	int *res;

	x = 0;
	y = 0;
	res = malloc(8);
	while (g_state->piece[x])
	{
		while (g_state->piece[x][y])
		{
			if (g_state->piece[x][y] == '*')
				if (can_place_current(i, j, x, y))
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
