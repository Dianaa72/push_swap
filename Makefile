GIT_USER := $(shell git config user.name)
CC = cc -Wall -Wextra -Werror

simple:
	$(CC) -Iincludes push_swap.c -o push_swap.out
	./push_swap.out

oclean: simple
	rm -f *.out

g:
	git pull
	git add .
	git commit -m "PRUEBA de Makefile desde 42 jaja (by $(GIT_USER))- $$(date +%H:%M:%S)"
	git push
	git status
	git log -1 --oneline