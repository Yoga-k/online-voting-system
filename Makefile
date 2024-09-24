SRC = $(shell find -iname "*.c")
OBJ_FILES = $(patsubst %c, %o, $(SRC))
main: main.o
	gcc $^ -o $@


%.o: %.c
	gcc -c $^

run: main
	./main

clean:
	rm main.o main