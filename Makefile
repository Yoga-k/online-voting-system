SRC = main.c
OBJ_FILES = $(SRC:%c=%o)
main: main.o
	gcc $^ -o $@


%.o: %.c
	gcc -c $^

run: main
	./main

clean:
	rm main.o main