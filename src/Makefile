CC = gcc
default: all

all: ../bin/datatypes ../bin/pointers_error

../bin/datatypes: ../bin datatypes.c
	$(CC) -o ../bin/datatypes datatypes.c

../bin/pointers_error: ../bin pointers_error.c
	$(CC) -o ../bin/pointers_error pointers_error.c

../bin: 
	@mkdir ../bin
	
clean: 
	@rm -rf ../bin *.o

.PHONY: clean
