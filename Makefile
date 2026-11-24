NAME = push_swap.a
B_NAME = $(basename $(NAME))

LIB = ./libft/
MAIN = ./main_check/
MOVE = ./movements/

MOVEMENTS = \
	$(MOVE)list_utils.c\
	$(MOVE)p_s_r.c\

LIBFT = \
	$(LIB)ft_isalpha.c\
	$(LIB)ft_isdigit.c\
	$(LIB)ft_isalnum.c\
	$(LIB)ft_isascii.c\
	$(LIB)ft_isprint.c\
	$(LIB)ft_strlen.c\
	$(LIB)ft_memset.c\
	$(LIB)ft_bzero.c\
	$(LIB)ft_memcpy.c\
	$(LIB)ft_memmove.c\
	$(LIB)ft_strlcpy.c\
	$(LIB)ft_strlcat.c\
	$(LIB)ft_toupper.c\
	$(LIB)ft_tolower.c\
	$(LIB)ft_strchr.c\
	$(LIB)ft_strrchr.c\
	$(LIB)ft_strncmp.c\
	$(LIB)ft_memchr.c\
	$(LIB)ft_memcmp.c\
	$(LIB)ft_strnstr.c\
	$(LIB)ft_atoi.c\
	$(LIB)ft_calloc.c\
	$(LIB)ft_strdup.c\
	$(LIB)ft_substr.c\
	$(LIB)ft_strjoin.c\
	$(LIB)ft_strtrim.c\
	$(LIB)ft_split.c\
	$(LIB)ft_striteri.c\
	$(LIB)ft_putchar_fd.c\
	$(LIB)ft_putstr_fd.c\
	$(LIB)ft_putendl_fd.c\
	$(LIB)ft_putnbr_fd.c\
	$(LIB)ft_lstadd_front.c\
	$(LIB)ft_lstnew.c\
	$(LIB)ft_lstsize.c\
	$(LIB)ft_lstlast.c\
	$(LIB)ft_lstadd_back.c\
	$(LIB)ft_lstdelone.c\
	$(LIB)ft_lstclear.c\
	$(LIB)ft_itoa.c\
	$(LIB)ft_strmapi.c\
	$(LIB)ft_lstiter.c\
	$(LIB)ft_lstmap.c\

SOURCES = \
	$(LIBFT)\
	$(MAIN)push_swap_main_checker.c\
	$(MOVEMENTS)\
	
	
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
	./push_swap.out ""
	./push_swap.out "1234 234234"

oclean: fclean
	rm -f *.out
	rm -f *.o
	rm -f */*.o

nc:
	norminette *.c

nl: 
	norminette *.h

g:
	git pull
	git add .
	git commit -m "Añadimos aún más cosas de listas $$(date +%H:%M:%S)"
	git push
	git status
	git log -1 --oneline