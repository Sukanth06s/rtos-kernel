CC=gcc
CFLAGS=-Iinclude -Wall
SRC=src/threading_posix.c tests/main_test_threads.c
OUT=test_threads

all:
	$(CC) $(CFLAGS) $(SRC) -o $(OUT)

clean:
	rm -f $(OUT)

