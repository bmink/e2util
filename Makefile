P = e2util
OBJS = main.o e2convert.o
CFLAGS = -g -Wall
LDLIBS = -lb

$(P): $(OBJS)
	$(CC) -o $(P) $(LDFLAGS) $(OBJS) $(LDLIBS)

clean:
	rm -f *o; rm -f $(P)

