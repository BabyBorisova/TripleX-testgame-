all:TripleX.o
	g++ -o TripleX TripleX.o

clean:
	$(RM) TripleX TripleX.o