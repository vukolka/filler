#include <libftprintf/libft.h>
#include <fcntl.h>
#include <get_next_line.h>
#include "../filler.h"

extern t_settings state;

void    get_piece_char()
{
    char *line;
    char *temp;

    get_next_line(STDIN_FILENO, &line);
    temp = line;
    while (*line && *line != 'p')
        line++;
    if (*(line + 1) == '1')
        state.player = 'o';
    else
        state.player = 'x';
    free(temp);
}

void    get_rows_cols()
{
    char *line;

    char *temp;
    get_next_line(STDIN_FILENO, &line);
    temp = line;
    while (!ft_isdigit(*line))
        line++;
    state.rows = ft_atoi(line);
    while (ft_isdigit(*line))
        line++;
    state.cols = ft_atoi(line + 1);
    free(temp);
}

void     get_map()
{
    char *line;
    int i;

    state.map = malloc(sizeof(char *) * (state.cols + 1));
    i = 0;
    get_next_line(STDIN_FILENO, &line);
    free(line);
    while (i < state.rows)
    {
        get_next_line(STDIN_FILENO, &line);
        state.map[i] = ft_strdup(line + 4);
        free(line);
        i++;
    }
    state.map[i] = NULL;
}

void    get_current_piece()
{
    char *line;
    int  size;
    int i;
    char *temp;
    i = 0;
    get_next_line(STDIN_FILENO, &line);
    temp = line;
    while (*line && !ft_isdigit(*line))
        line++;
    size = ft_atoi(line);
    free(temp);
    state.piece = malloc(sizeof(char *) * (size + 1));
    while (i < size)
    {
        get_next_line(STDIN_FILENO, &line);
        state.piece[i] = ft_strdup(line);
        free(line);
        i++;
    }
    state.piece[i] = NULL;
}

void    get_current_map()
{
    get_piece_char();
    get_rows_cols();
    get_map();
    get_current_piece();
}