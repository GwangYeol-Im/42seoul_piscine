AR = ar
ARFLAGS = cv
CC = gcc
CFLAGS = -Wall -Wextra -Werror

INC_DIR = ./includes
INC = ft.h
SRC_DIR = ./srcs
SRCS = ft_putchar.c ft_swap.c ft_putstr.c ft_strlen.c ft_strcmp.c
OBJS = $(addprefix $(SRC_DIR)/, $(SRCS:.c=.o))

TARGET = libft.a

$(TARGET) : $(addprefix $(INC_DIR)/, $(INC)) $(OBJS)
	$(AR) $(ARFLAGS) $@ $^

all : $(TARGET)

clean :
	rm -f $(OBJS)

fclean : clean
	rm -f $(TARGET)

re: fclean all

.c.o :
	$(CC) $(CFLAGS) -I$(INC_DIR) -c $< -o $(<:.c=.o)