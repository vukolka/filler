#ifndef FILLER_MVUKOLOV_FILLER_H
#define FILLER_MVUKOLOV_FILLER_H

# define PLAYER state->player
# define ENEMY state->enemy

typedef struct      s_settings
{
    char            **map;
	char            player;
	char            enemy;
    int             rows;
    int             cols;
    char            **piece;
}                   t_settings;

t_settings          *state;
void				get_current_map();
void				get_corners(char **piece, int *x, int *y);
int 				*can_place(int i, int j);
int					*get_the_further(int i, int j);
int					*get_direction();
int 				is_better(int x, int y, int prex, int prey, const int *dir);
#endif
