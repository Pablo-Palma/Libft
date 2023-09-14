NAME = libft.a
SRC	=	ft_atoi.c ft_isalnum.c ft_isalpha.c ft_isascii.c ft_isdigit.c \
		ft_isprint.c ft_bzero.c ft_memcmp.c ft_memcpy.c ft_memmove.c \
		ft_memset.c ft_memchr.c ft_strlen.c ft_strncmp.c ft_strchr.c \
		ft_strnstr.c ft_strrchr.c ft_strlcpy.c ft_strlcat.c ft_toupper.c \
		ft_tolower.c ft_strdup.c ft_calloc.c ft_substr.c ft_strjoin.c \
		ft_strtrim.c ft_split.c ft_itoa.c ft_strmapi.c ft_striteri.c \
		ft_putchar_fd.c ft_putstr_fd.c ft_putendl_fd.c
OBJ = $(SRC:.c=.o)
BONUS_SRC =	ft_lstnew.c ft_lstadd_front.c
BONUS_OBJ = $(BONUS_SRC:.c=.o)
FLAGS =	-Wall -Werror -Wextra

all: $(NAME)

$(NAME): $(OBJ)
	@ar rcs $(NAME) $(OBJ)
	@echo "Libft compiled succesfully!"

bonus: $(OBJ) $(BONUS_OBJ)
	@ar rcs $(NAME) $(OBJ) $(BONUS_OBJ)
	@echo "Libft bonus compiled succesfully!"

%.o: %.c libft.h
	@gcc $(FLAGS) -c $< -o $@

clean:
	@rm -f $(OBJ) $(BONUS_OBJ)
	@echo "Objet files removed!"

fclean: clean
	@rm -f $(NAME)
	@echo "Library removed!"

re: fclean all
