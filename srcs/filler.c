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

    i = 0;
    get_current_map();
    while (state.map[i])
    {
        ft_printf("%s\n", state.map[i]);
        i++;
    }
    i = 0;
    while (state.piece[i])
    {
        ft_printf("%s\n", state.piece[i]);
        i++;
    }
    ft_printf("player shape = %c\n", state.player);
    return (0);
}
