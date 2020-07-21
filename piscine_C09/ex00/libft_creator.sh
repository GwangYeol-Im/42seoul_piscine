#!/bin/sh

gcc -Wall -Wextra -Werror -c ./ft_*
ar rc libft.a ./*.o
