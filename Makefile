OBJ_FILES = main.o
main: $(OBJ_FILES)
	gcc $^ -o $@


%.o: %.c
	gcc -c $^

run: main
	./main

clean:
	rm main.o main