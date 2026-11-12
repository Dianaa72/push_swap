GIT_USER := $(shell git config user.name)

g:
	git pull
	git add .
	git commit -m "PRUEBA (by $(GIT_USER))- $$(date +%H:%M:%S)"
	git push
	git status
	git log -1 --oneline