all: fahrenheit2celsius
fahrenheit2celsius:
	gcc -ggdb -ansi -Wall -pedantic fahrenheit2celsius.c -o fahrenheit2celsius
      
	gcc -ggdb -ansi -Wall -pedantic floating_fahrenheit2celsius.c -o floating_fahrenheit2celsius

clean:
	rm -f *.o fahrenheit2celsius

	rm -f *.o floating_fahrenheit2celsius
