/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   filler.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvukolov <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/09 04:57:31 by mvukolov          #+#    #+#             */
/*   Updated: 2018/01/09 04:57:32 by mvukolov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FILLER_H
# define FILLER_H
# define PLAYER 	g_state->player
# define ENEMY 		g_state->enemy

typedef struct		s_settings
{
	char			**map;
	char			player;
	char			enemy;
	int				rows;
	int				cols;
	char			**piece;
}					t_settings;

t_settings			*g_state;

void				get_current_map();
int					*can_place(int i, int j);
int					*get_direction(int x, int y, int avaragex, int avaragey);
int					is_better(int *src, int prex, int prey, const int *dir);
void				free2d(char ***array_src);
void				free_map(void);
int					abs(int a);

#endif
