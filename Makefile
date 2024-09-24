OBJ_FILES = main.o
main: main.o
	gcc $(OBJ_FILES) -o $@


%.o: %.c
	gcc -c $^

run: main
	./main

clean:
	rm main.o main