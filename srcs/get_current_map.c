#include <libftprintf/libft.h>
#include <fcntl.h>
#include <get_next_line.h>
#include <ft_printf/ft_printf.h>
#include "../filler.h"

extern t_settings state;

char	*get_piece_char(int fd)
{
    char *line;
    char *temp;

    get_next_line(STDIN_FILENO, &line);
	temp = line;
	if (*temp != '$')
		return (temp);
    while (*line && *line != 'p')
        line++;
    if (*(line + 1) == '1')
        state.player = 'o';
    else
        state.player = 'x';
	write(fd, temp, ft_strlen(temp));
	write(fd, "\n", 1);
	free(temp);
	temp = NULL;
	return (temp);
}

void    get_rows_cols(char *str, int fd)
{
    char *line;
    char *temp;
	if (!str)
		get_next_line(STDIN_FILENO, &line);
	else
		line = str;
	temp = line;
	write(fd, temp, ft_strlen(temp));
	write(fd, "\n", 1);
	while (!ft_isdigit(*line))
        line++;
    state.rows = ft_atoi(line);
    while (ft_isdigit(*line))
        line++;
    state.cols = ft_atoi(line + 1);
    free(temp);
}

void     get_map(int fd)
{
    char *line;
    int i;

    state.map = malloc(sizeof(char *) * (state.cols + 1));
    i = 0;
    get_next_line(STDIN_FILENO, &line);
	write(fd, line, ft_strlen(line));
	write(fd, "\n", 1);
	free(line);
    while (i < state.rows)
    {
        get_next_line(STDIN_FILENO, &line);
        state.map[i] = ft_strdup(line + 4);
		write(fd, line, ft_strlen(line));
		write(fd, "\n", 1);
		free(line);
        i++;
    }
    state.map[i] = NULL;
}

void    get_current_piece(int fd)
{
    char *line;
    int  size;
    int i;
    char *temp;
    i = 0;
    get_next_line(STDIN_FILENO, &line);
    temp = line;
	write(fd, temp, ft_strlen(temp));
	write(fd, "\n", 1);
	while (*line && !ft_isdigit(*line))
        line++;
    size = ft_atoi(line);
    free(temp);
    state.piece = malloc(sizeof(char *) * (size + 1));
    while (i < size)
    {
        get_next_line(STDIN_FILENO, &line);
        state.piece[i] = ft_strdup(line);
		write(fd, temp, ft_strlen(temp));
		write(fd, "\n", 1);
		free(line);
        i++;
    }
    state.piece[i] = NULL;
}

void    get_current_map()
{
	char	*line;
	int 	fd;

	fd = open("fuck", O_WRONLY | O_TRUNC | O_CREAT, S_IRWXO | S_IRWXG | S_IRWXU);
	write(fd, "wtf?\n", 5);
//	debug_input();
//	exit(0);
	line = get_piece_char(fd);
    get_rows_cols(line, fd);
    get_map(fd);
    get_current_piece(fd);
	close(fd);
}
