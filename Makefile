all: Queue.cc unit.cc
	g++ -Wall -g -o queue main.cc Queue.cc unit.cc
clean:
	-rm queue
