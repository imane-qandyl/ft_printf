NAME = libftprintf.a

SRC = ft_printf.c \
	  ft_characters.c \
	  ft_printdigit.c \
	  ft_printstring.c \
	  ft_printhex.c \
	  ft_printpointer.c \
	  ft_print_unsigned_digit.c \
	  ft_strchr.c 
	
OBJ = $(SRC:.c=.o) 

CC = cc 

CFLAGS = -Wall -Werror -Wextra 

RM = rm -rf

all: $(NAME)

$(NAME): $(OBJ)
	ar rcs $(NAME) $(OBJS)

clean:
	$(RM) $(OBJ) 

fclean: clean
	$(RM) $(NAME) 

re: fclean all

.PHONY: all bonus clean fclean re