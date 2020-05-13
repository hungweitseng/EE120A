all: structure array

EXTRA_CFLAGS = -O3

structure: structure.c 
	gcc  $(EXTRA_CFLAGS) structure.c -o structure

array: array.c 
	gcc  $(EXTRA_CFLAGS) array.c -o array

clean:
		rm -f structure array *~
