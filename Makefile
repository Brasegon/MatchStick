NAME	= matchstick

CC	= gcc

RM	= rm -f

SRCS	= ./error.c \
	  ./lib/fctprintf1.c \
	  ./lib/fctprintf2.c \
	  ./lib/my_printf.c \
	  ./lib/my_strcpy.c \
	  ./player.c \
	  ./triange.c \
	  ./utils/get_next_line.c \
	  ./utils/my_str_isnum.c \
	  ./utils/my_strncpy.c \
	  ./utils/utils.c \
	  ./utils.c 

OBJS	= $(SRCS:.c=.o)

CFLAGS = -I ./lib/
CFLAGS += -Wall -Wextra

all: $(NAME)

$(NAME): $(OBJS)
	 $(CC) $(OBJS) -o $(NAME) $(LDFLAGS)

clean:
	$(RM) $(OBJS)

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re
