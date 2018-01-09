/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   external_functions.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvukolov <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/09 04:47:08 by mvukolov          #+#    #+#             */
/*   Updated: 2018/01/09 04:47:09 by mvukolov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "../filler.h"

extern t_settings	*g_state;

void	free2d(char ***array_src)
{
	char	**array;
	int		i;

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

void	free_map(void)
{
	free2d(&(g_state->map));
	free2d(&(g_state->piece));
}

int		abs(int a)
{
	if (a < 0)
		return (-a);
	return (a);
}

int		is_better(int *src, int prex, int prey, const int *dir)
{
	int was;
	int is;
	int dirx;
	int diry;

	dirx = dir[0];
	diry = dir[1];
	is = abs(dirx - src[0]) + abs(diry - src[1]);
	was = abs(dirx - prex) + abs(diry - prey);
	if (is < was)
		return (1);
	return (0);
}
