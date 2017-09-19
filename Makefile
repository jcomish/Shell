all: yash.c input.c process.c
	gcc -g -Wall -o yash yash.c input.c process.c

yash.o : yash.c input.h process.h
	cc -c yash.c
	

clean:
	$(RM) yash
