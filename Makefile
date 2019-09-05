all: my_prog:
	gcc *.c -o my_prog -Wall

clean:
	rm -f *.o prorg
run:
	./prorg <input.txt > output.txt
