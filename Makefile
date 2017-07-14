all:
	$(CC) -static -g main.c

clean:
	$(RM) a.out
