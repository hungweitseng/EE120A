all: shift

#EXTRA_CFLAGS = -DHAVE_LINUX_PERF_EVENT_H 

shift: shift.c 
	gcc -Wno-constant-conversion $(EXTRA_CFLAGS) shift.c -o shift

clean:
		rm -f shift
