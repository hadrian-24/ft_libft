NAME = libft.a
SRC = ft_atoi.c ft_bzero.c ft_calloc.c ft_isalnum.c ft_isalpha.c ft_isascii.c ft_isdigit.c ft_isprint.c \
ft_itoa.c ft_strjoin.c ft_memchr.c ft_memcmp.c ft_memcpy.c ft_memmove.c ft_memset.c ft_putchar_fd.c \
ft_putstr_fd.c ft_putendl_fd.c ft_putnbr_fd.c ft_split.c ft_strchr.c ft_strdup.c ft_striteri.c ft_strlcat.c \
ft_strlcpy.c ft_strlen.c ft_strmapi.c ft_strncmp.c ft_strnstr.c ft_strrchr.c ft_strtrim.c ft_substr.c \
ft_tolower.c ft_toupper.c

OBJ = $(SRC:.c=.o)
HEADER = includes
CFLAGS = -Wall -Wextra -Werror

BONUS_SRC = ft_lstnew.c ft_lstadd_front.c ft_lstsize.c ft_lstlast.c ft_lstadd_back.c ft_lstdelone.c \
ft_lstclear.c ft_lstiter.c ft_lstmap.c

BONUS_OBJ = $(BONUS_SRC:.c=.o)

all: $(NAME)

$(NAME): $(OBJ)
	ar -rcs $(NAME) $(OBJ)	##	-ar archive utility, -rcs replace, create, symbol table
	ranlib $(NAME)			##	ranlib creates a symbol table for the archive
							##	helps the linker quickly locate symbols

bonus: $(OBJ) $(BONUS_OBJ)
	ar -rcs $(NAME) $(OBJ) $(BONUS_OBJ)
	ranlib $(NAME)

%.o: %.c
	gcc $(CFLAGS) -I$(HEADER) -c $< -o $@

test: $(NAME)
	gcc $(CFLAGS) -I$(HEADER) test_libft/main.c -L. -lft -lbsd -o test_program
	./test_program

clean:
	rm -f $(OBJ) $(BONUS_OBJ) ## -f force removal

fclean: clean
	rm -f $(NAME) ## -f force removal

re: fclean all

.PHONY: all clean fclean bonus re
