#include <libft.h>
#include <fcntl.h>
#include <get_next_line.h>
#include <ft_printf.h>
#include "../filler.h"

extern t_settings *state;

char	*get_piece_char()
{
    char *line;
    char *temp;

	if (!get_next_line(STDIN_FILENO, &line))
		exit(0);
	temp = line;
	if (*temp != '$')
		return (temp);
    while (*line && *line != 'p')
        line++;
	PLAYER = *(line + 1) == '1' ? 'o': 'x';
	ENEMY = *(line + 1) == '1' ? 'x': 'o';
	free(temp);
	temp = NULL;
	return (temp);
}

void	get_rows_cols(char *str)
{
    char *line;
    char *temp;
	if (!str)
		get_next_line(STDIN_FILENO, &line);
	else
		line = str;
	temp = line;
	while (!ft_isdigit(*line))
        line++;
    state->rows = ft_atoi(line);
    while (ft_isdigit(*line))
        line++;
    state->cols = ft_atoi(line + 1);
    free(temp);
}

void     get_map()
{
    char *line;
    int i;

    state->map = malloc(sizeof(char *) * (state->rows + 1));
    i = 0;
    get_next_line(STDIN_FILENO, &line);
	free(line);
    while (i < state->rows)
    {
        get_next_line(STDIN_FILENO, &line);
		state->map[i] = ft_strdup(line + 4);
		free(line);
        i++;
    }
    state->map[i] = NULL;
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
	if (*line == '0')
		size = 0;
	else
    	size = ft_atoi(line);
    free(temp);
    state->piece = malloc(sizeof(char *) * (size + 1));
    while (i < size)
    {
        get_next_line(STDIN_FILENO, &line);
        state->piece[i] = ft_strdup(line);
		free(line);
        i++;
    }
    state->piece[i] = NULL;
}

void		get_current_map()
{
	char	*line;

	line = get_piece_char();
    get_rows_cols(line);
    get_map();
    get_current_piece();
}
