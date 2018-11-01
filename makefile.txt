final: main.o UtPod.o song.o
	g++ -otest  main.o UtPod.o song.o
driver: main.cpp UtPod.h song.h
	g++ -c main.cpp
UtPod.o: UtPod.cpp UtPod.h song.h
	g++ -c UtPod.cpp
song.o: song.cpp song.h
	g++ -c song.cpp