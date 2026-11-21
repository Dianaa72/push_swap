NAME = push_swap.a
B_NAME = $(basename $(NAME))

DIR_L = ./libft/
SOURCES = \
	$(DIR_L)ft_isalpha.c\
	$(DIR_L)ft_isdigit.c\
	$(DIR_L)ft_isalnum.c\
	$(DIR_L)ft_isascii.c\
	$(DIR_L)ft_isprint.c\
	$(DIR_L)ft_strlen.c\
	$(DIR_L)ft_memset.c\
	$(DIR_L)ft_bzero.c\
	$(DIR_L)ft_memcpy.c\
	$(DIR_L)ft_memmove.c\
	$(DIR_L)ft_strlcpy.c\
	$(DIR_L)ft_strlcat.c\
	$(DIR_L)ft_toupper.c\
	$(DIR_L)ft_tolower.c\
	$(DIR_L)ft_strchr.c\
	$(DIR_L)ft_strrchr.c\
	$(DIR_L)ft_strncmp.c\
	$(DIR_L)ft_memchr.c\
	$(DIR_L)ft_memcmp.c\
	$(DIR_L)ft_strnstr.c\
	$(DIR_L)ft_atoi.c\
	$(DIR_L)ft_calloc.c\
	$(DIR_L)ft_strdup.c\
	$(DIR_L)ft_substr.c\
	$(DIR_L)ft_strjoin.c\
	$(DIR_L)ft_strtrim.c\
	$(DIR_L)ft_split.c\
	$(DIR_L)ft_striteri.c\
	$(DIR_L)ft_putchar_fd.c\
	$(DIR_L)ft_putstr_fd.c\
	$(DIR_L)ft_putendl_fd.c\
	$(DIR_L)ft_putnbr_fd.c\
	$(DIR_L)ft_lstadd_front.c\
	$(DIR_L)ft_lstnew.c\
	$(DIR_L)ft_lstsize.c\
	$(DIR_L)ft_lstlast.c\
	$(DIR_L)ft_lstadd_back.c\
	$(DIR_L)ft_lstdelone.c\
	$(DIR_L)ft_lstclear.c\
	$(DIR_L)ft_itoa.c\
	$(DIR_L)ft_strmapi.c\
	$(DIR_L)ft_lstiter.c\
	$(DIR_L)ft_lstmap.c\
	push_swap_main_checker.c\

OBJS = $(SOURCES:.c=.o)

INCLUDES = libft.h

GIT_USER := $(shell git config user.name)
CC = cc -Wall -Wextra -Werror

all: $(NAME)

bonus: all

$(NAME): $(OBJS)
	ar rcs $(NAME) $(OBJS)

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all

#OTRAS COSAS ÚTILES#

simple: all
	$(CC) -I. -Iincludes $(B_NAME).c $(NAME) -o $(B_NAME).out
	./push_swap.out
	./push_swap.out -
	./push_swap.out --
	./push_swap.out -1a
	./push_swap.out -a
	./push_swap.out -123424
	./push_swap.out 123424

oclean: simple
	rm -f *.out

nc:
	norminette *.c

nl: 
	norminette libft.h

g:
# 	git pull
	git add .
	git commit -m "Añadido parseo de datos sin espacios $$(date +%H:%M:%S)"
	git push
	git status
	git log -1 --oneline