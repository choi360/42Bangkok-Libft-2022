SRCS = ft_isalpha.c \
       ft_isalnum.c \
       ft_isdigit.c \

NAME = libft.a

FLAGS = -Wall -Wextra -Werror

all: $(NAME)

$(NAME):$(SRCS)
		@gcc $(FLAGS) -c $(SRCS) -I./
		@ar rc $(NAME) *.o
		@rm -f *.o

clean:
	@rm -f *.o

fclean: clean
	@rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
