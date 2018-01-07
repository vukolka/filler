#include <stdio.h>
#include <fcntl.h>
#include <get_next_line.h>
#include <libftprintf/libft.h>
#include <ft_printf/ft_printf.h>
#include "../filler.h"

extern t_settings  state;

int		main()
{
    int     i;
	int		j;
	int		*res;

	j = 0;
    i = 0;
    get_current_map();
    while (state.map[i])
    {
		while (state.map[i][j])
		{
			if ((res = can_place(i, j)))
			{
				printf("%d %d\n", res[0], res[1]);
				return (0);
			}
			j++;
		}
		j = 0;
        i++;
    }
    return (0);
}
