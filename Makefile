NAME=mvukolov.filler
FLAGS=-Wall -Wextra -Werror
OBJECTS = srcs/can_place.o srcs/filler.o srcs/get_current_map.o get_next_line/get_next_line.o srcs/calculate_direction.o srcs/external_functions.o

all: $(NAME)

$(OBJECTS) : %.o: %.c
	$(CC) -c $(FLAGS) -I ft_printf/ft_printf/ -I ft_printf/libftprintf/ -I get_next_line/ $< -o $@


$(NAME): $(OBJECTS)
	$(MAKE) -C ft_printf/
	gcc -o $(NAME) $(OBJECTS) ft_printf/libftprintf.a
	cp $(NAME) resources/players/

clean:
	$(MAKE) -C ft_printf/ clean
	-rm $(OBJECTS)
fclean : clean
	$(MAKE) -C ft_printf/ fclean
	-rm -v $(NAME)
re: fclean all

