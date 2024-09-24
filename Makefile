
main: main.o
	gcc $< -o $@


main.o: main.c
	gcc -c main.c

run: main
	./main

clean:
	rm main.o main