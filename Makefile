NAME = libft.a
SRC = $(wildcard *.c)
OBJ = $(SRC:.c=.o)
HEADER = includes
CFLAGS = -Wall -Wextra -Werror

all: $(NAME)

$(NAME): $(OBJ)
	ar -rv $(NAME) $(OBJ)
	ranlib $(NAME)

%.o: %.c
	gcc $(CFLAGS) -I$(HEADER) -c $< -o $@

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

test: $(NAME)
	gcc $(CFLAGS) -I$(HEADER) test_libft/main.c -o test_libft/test_program $(NAME)
	./test_libft/test_program
	make fclean

re: fclean all
