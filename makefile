all: test.o song_node.o
	gcc test.o song_node.o

test.o: test.c song_node.h
	gcc -c test.c

song_node.o: song_node.c song_node.h
	gcc -c song_node.c

run: a.out
	./a.out
