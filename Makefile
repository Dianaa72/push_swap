GIT_USER := $(shell git config user.name)

g:
	git pull
	git add .
	git commit -m "PRUEBA de Makefile desde 42 jaja (by $(GIT_USER))- $$(date +%H:%M:%S)"
	git push
	git status
	git log -1 --oneline