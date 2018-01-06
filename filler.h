#ifndef FILLER_MVUKOLOV_FILLER_H
#define FILLER_MVUKOLOV_FILLER_H

typedef struct      s_settings
{
    char            **map;
    char            player;
    int             rows;
    int             cols;
    char            **piece;
}                   t_settings;

t_settings          state;
void                get_current_map();
void	get_corners(char **piece, int *x, int *y);
int 	*can_place(int i, int j);
#endif
