NAME = push_swap.a
B_NAME = $(basename $(NAME))

LIB = ./libft/
PF = ./printf/
PARS = ./parsing/
N_U = ./node_utils/
OP = ./operations/
ALG = ./algorithms/

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

PRINTF = \
	$(PF)ft_print_utils.c\
	$(PF)ft_printer_functions.c\
	$(PF)ft_printf.c\

PARSING = \
	$(PARS)argv_to_node.c\
	$(PARS)index_of_disorder.c\
	$(PARS)push_swap_main_checker.c\
	$(PARS)main_utils.c\
	$(PARS)flag_utils.c\

NODE_UTILS = \
	$(N_U)list_utils.c\
	$(N_U)stack_utils.c\
	$(N_U)pos_and_index.c\
	$(N_U)print_stack.c\

OPERATIONS = \
	$(OP)operations_a.c\
	$(OP)operations_b.c\
	$(OP)operations_both.c\
	$(OP)p_s_r.c\
	$(OP)complex_operations.c\

ALGORITHMS = \
	$(ALG)little_sorters.c\

SOURCES = \
	$(LIBFT)\
	$(PRINTF)\
	$(PARSING)\
	$(NODE_UTILS)\
	$(OPERATIONS)\
	$(ALGORITHMS)\
	
OBJS = $(SOURCES:.c=.o)

L_H = libft.h
L_PF = printf.h

INCLUDES = -I. -I$(LIB) -I$(PF) -I$(PARS) -I$(N_U) -I$(OP)

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
	$(CC) $(INCLUDES) $(B_NAME).c $(NAME) -o $(B_NAME).out
	./push_swap.out 1 4 
	./push_swap.out 1 7 
	./push_swap.out 1 234 5 33333 6

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
	git commit -m "Quito printfs de depuración $$(date +%H:%M:%S)"
	git push
	git status
	git log -1 --oneline