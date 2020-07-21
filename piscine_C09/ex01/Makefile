AR = ar
ARFLAGS = cv
CC = gcc
CFLAGS = -Wall -Wextra -Werror

TARGET = libft.a

INC_DIR = ./includes
INC = ft.h

SRC_DIR = ./srcs
SRCS = ft_putchar.c \
			ft_swap.c \
			ft_putstr.c \
			ft_strlen.c \
			ft_strcmp.c
OBJS = $(addprefix $(SRC_DIR)/, $(SRCS:.c=.o))

all : $(TARGET)

clean :
	rm -f $(OBJS)

fclean :
	rm -f $(TARGET)

re: fclean all

$(TARGET) : $(addprefix $(INC_DIR)/, $(INC)) $(OBJS)
	$(AR) $(ARFLAGS) $@ $^

.c.o :
	$(CC) $(CFLAGS) -I$(INC_DIR) -c $< -o $(<:.c=.o)