#include <libftprintf/libft.h>
#include <fcntl.h>

int     check_piece_size(char *str)
{
    if (!(ft_strnequ(str, "Piece", 5)))
        return (0);
    while (*str && !ft_isdigit(*str))
        str++;
    return (ft_atoi(str));
}

char    **get_current_map()
{
    int     fd;

    fd = open("test", O_WRONLY | O_CREAT | O_TRUNC,
              S_IRWXO | S_IRWXG | S_IRWXU);


}