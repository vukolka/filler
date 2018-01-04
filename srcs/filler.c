#include <stdio.h>
#include <fcntl.h>
#include <get_next_line.h>
#include <libftprintf/libft.h>

int		main()
{
	char	*line;
	int 	fd;

	fd = open("test", O_TRUNC);
	while (get_next_line(0, &line))
	{
		write(fd, line, ft_strlen(line));
		free(line);
	}
	printf("Hello World\n");
	return (0);
}
