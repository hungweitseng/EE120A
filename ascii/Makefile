all: print ascii binary gen 

EXTRA_CFLAGS = -O3

print: print.c 
	gcc  $(EXTRA_CFLAGS) print.c -o print

gen: gen.c 
	gcc  $(EXTRA_CFLAGS) gen.c -o gen

ascii: ascii.c 
	gcc  $(EXTRA_CFLAGS) ascii.c -o ascii

binary: binary.c 
	gcc  $(EXTRA_CFLAGS) binary.c -o binary

clean:
		rm -f ascii binary print gen *~
