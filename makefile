build:
	gcc -o enumerate_numbers main.c
	chmod a+x enumerate_numbers

clean:
	if [ ! -f enumerate_numbers ]; then :; else rm enumerate_numbers; fi;
