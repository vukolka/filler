#include <stdio.h>
#include <fcntl.h>
#include <get_next_line.h>
#include <libftprintf/libft.h>

int		main()
{
    char    **map;
	char	*line;
	int 	fd;
    int     i;

	while ((get_next_line(STDIN_FILENO, &line)))
	{

		write(fd, line, ft_strlen(line));
        write(fd, "\n", 1);
        if ((i = check_piece_size(line))) {
            while (i-- > 0)
            {
                get_next_line(STDIN_FILENO, &line);
                write(fd, line, ft_strlen(line));
                write(fd, "\n", 1);
                free(line);
            }
            break ;
        }
		free(line);

	}
    write(fd, "wtf?", 4);
	write(1, "5 5\n", 4);
    close (fd);
    return (0);
}
