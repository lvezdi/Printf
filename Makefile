NAME = libftprintf.a

SRC = 

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
