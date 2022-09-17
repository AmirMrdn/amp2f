
CC = gcc

LIST = fsize cat touch hexx main

.DEFAULT_GOAL := all

%: %.c
	@${CC} $^ -o $@

all: $(LIST)
