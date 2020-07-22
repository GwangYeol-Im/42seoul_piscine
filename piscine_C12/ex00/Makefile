CC = gcc
CFLAGS = -Wall -Wextra -Werror
SRCS = main.c ft_create_elem.c
OBJS = $(SRCS:.c=.o)

TARGET = test

$(TARGET) : $(OBJS)
	$(CC) $(CFLAGS) -o $@ $^

all : $(TARGET)

.c.o :
	$(CC) $(CFLAGS) -c -o $(<:.c=.o) $<

clean :
	rm -f $(OBJS)

fclean : clean
	rm -r $(TARGET)

re : fclean all