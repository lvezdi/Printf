NAME = libftprintf.a

SRC = printf.c \
		print_int.c \
		print_char.c \
		print_hexadecimal.c \
		print_str.c

OBJS = $(SRC:.c=.o)

CC = gcc

CFLAGS = -Wall -Wextra -Werror

RM = rm -f

PACK = ar rcs

all : $(NAME)

$(NAME) : $(OBJS)
		$(PACK) $(NAME) $(OBJS)

clean : 
		@$(RM) $(OBJS)

fclean : clean
		@$(RM) $(NAME)

re : fclean all

.PHONY : all clean fclean re
