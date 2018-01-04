#include <stdio.h>
#include <fcntl.h>
#include <get_next_line.h>
#include <libftprintf/libft.h>

int		main()
{
	char	*line;
	int 	fd;

    int i;
	fd = open("newfile", O_WRONLY | O_CREAT | O_TRUNC, S_IRWXO | S_IRWXG | S_IRWXU);
    write (fd, "shit", 4);
	while ((i = get_next_line(STDIN_FILENO, &line)))
	{
        if (line == NULL)
            break;
		write(fd, line, ft_strlen(line));
        write(fd, "\n", 1);
		free(line);
	}
    write(fd, "wtf?", 4);
	write(0, "5 5\n", 4);
    close (fd);
    return (0);
}
