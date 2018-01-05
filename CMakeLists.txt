cmake_minimum_required(VERSION 3.9)
project(filler_mvukolov C)

set(CMAKE_C_STANDARD 99)

set(SOURCE_FILES
        srcs/filler.c
        get_next_line/get_next_line.c get_next_line/get_current_map.c filler.h)
include_directories(get_next_line)

include_directories(ft_printf)

include_directories(ft_printf/libftprintf)

add_subdirectory(ft_printf)

add_executable(filler_mvukolov ${SOURCE_FILES})

target_link_libraries(filler_mvukolov libft)