# **************************************************************************** #
#                                                           LE - /             #
#                                                               /              #
#    Makefile                                         .::    .:/ .      .::    #
#                                                  +:+:+   +:    +:  +:+:+     #
#    By: ybarraul <marvin@le-101.fr>                +:+   +:    +:    +:+      #
#                                                  #+#   #+    #+    #+#       #
#    Created: 2018/01/08 12:00:20 by ybarraul     #+#   ##    ##    #+#        #
#    Updated: 2018/01/08 13:00:50 by ybarraul    ###    #+. /#+    ###.fr      #
#                                                          /                   #
#                                                         /                    #
# **************************************************************************** #

NAME = libft.a
FLAG = -Werror -Wall -Wextra
SRC = ft_bzero.c ft_isalpha.c ft_isdigit.c ft_memcmp.c ft_strcat.c \
	  ft_strcmp.c ft_strdup.c ft_strncat.c ft_strncpy.c ft_strrchr.c ft_tolower.c \
	  ft_atoi.c ft_isalnum.c ft_isascii.c ft_isprint.c ft_memset.c ft_strchr.c \
	  ft_strcpy.c ft_strlcat.c ft_strlen.c ft_strncmp.c ft_strnstr.c ft_strstr.c \
	  ft_toupper.c ft_putchar.c ft_putstr.c ft_putchar_fd.c ft_putstr_fd.c \
	  ft_memcpy.c ft_itoa.c ft_strsplit.c ft_putendl.c ft_putnbr.c ft_putendl_fd.c \
	  ft_putnbr_fd.c ft_memccpy.c ft_memalloc.c ft_memchr.c ft_strjoin.c \
	  ft_memmove.c ft_memdel.c ft_strnew.c ft_strdel.c ft_strclr.c \
	  ft_striter.c ft_strsub.c ft_striteri.c ft_strmap.c ft_strmapi.c \
	  ft_strequ.c ft_strnequ.c ft_strtrim.c ft_lstnew.c ft_lstdelone.c \
	  ft_lstdel.c ft_lstadd.c ft_lstiter.c ft_lstmap.c ft_swap.c \
	  ft_recursive_power.c ft_recursive_factorial.c ft_sqrt.c \
	  ft_islower.c ft_isupper.c ft_str_is_alpha.c ft_str_is_lowercase.c \
	  ft_str_is_uppercase.c ft_str_is_print.c ft_str_is_numeric.c \
	  ft_strcapitalize.c ft_strupcase.c ft_strlowcase.c ft_strrev.c
OBJ = $(SRC:.c=.o)
	HEADER = libft.h

all: $(NAME)

%.o: %.c
	gcc $(FLAG) -c $^ -o $@ -I  $(HEADER)

$(NAME): $(OBJ)
	ar rc $(NAME) $(OBJ) $@ $^
	ranlib $(NAME)

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all
