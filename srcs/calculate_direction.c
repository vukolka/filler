/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   calculate_direction.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvukolov <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/09 03:59:35 by mvukolov          #+#    #+#             */
/*   Updated: 2018/01/09 03:59:36 by mvukolov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>
#include "../filler.h"

extern t_settings	*g_state;

static int			*get_the_further(int i, int j, int x, int y)
{
	int prex;
	int prey;
	int *res;

	prex = 0;
	prey = 0;
	while (g_state->map[x])
	{
		while (x < g_state->rows && g_state->map[x][y])
		{
			if (g_state->map[x][y] == '.')
				if (!is_better((int[]){x, y}, prex, prey, (int[]) {i, j}))
				{
					prex = x;
					prey = y;
				}
			y++;
		}
		y = 0;
		x++;
	}
	res = malloc(8);
	res[0] = prex;
	res[1] = prey;
	return (res);
}

int					*get_direction(int x, int y, int avaragex, int avaragey)
{
	int count;

	count = 0;
	while (x < g_state->rows && g_state->map[x])
	{
		while (g_state->map[x][y])
		{
			if (g_state->map[x][y] == PLAYER ||
				g_state->map[x][y] == PLAYER - 32)
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
	return (get_the_further(avaragex, avaragey, 0, 0));
}
