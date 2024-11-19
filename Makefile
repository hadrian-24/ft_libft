NAME = libft.a
SRC = ft_atoi.c ft_bzero.c ft_calloc.c ft_isalnum.c ft_isalpha.c ft_isascii.c ft_isdigit.c ft_isprint.c \
ft_itoa.c ft_join.c ft_memchr.c ft_memcmp.c ft_memcpy.c ft_memmove.c ft_memset.c \
ft_split.c ft_strchr.c ft_strdup.c ft_striteri.c ft_strlcat.c ft_strlcpy.c ft_strlen.c ft_strmapi.c \
ft_strncmp.c ft_strnstr.c ft_strrchr.c ft_strtrim.c ft_substr.c ft_tolower.c ft_toupper.c

OBJ = $(SRC:.c=.o)
HEADER = includes
CFLAGS = -Wall -Wextra -Werror

BONUS_SRC = ft_lstnew.c
BONUS_OBJ = $(BONUS_SRC:.c=.o)

all: $(NAME)

$(NAME): $(OBJ)
	ar -rv $(NAME) $(OBJ)
	ranlib $(NAME)

$(BONUS_OBJ): $(BONUS_SRC)
	gcc $(CFLAGS) -I$(HEADER) -c $< -o $@

%.o: %.c
	gcc $(CFLAGS) -I$(HEADER) -c $< -o $@

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

bonus: $(BONUS_OBJ)
	ar -rv $(NAME) $(BONUS_OBJ)
	ranlib $(NAME)

test: $(NAME)
	gcc $(CFLAGS) -I$(HEADER) test_libft/main.c -o test_libft/test_program $(NAME)
	./test_libft/test_program
	make fclean

re: fclean all
