all:
	gcc -Wall -o prog.out main.c

.c.o:
	gcc -Wall $< -o $@

clean:
	rm prog.out
