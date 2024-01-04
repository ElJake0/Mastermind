.default: all

all: mastermind

clean:
	rm -rf masermind *.o *.dSYM

mastermind: main.o Board.o MenuUI.o
	g++ -Wall -Werror -std=c++14 -g -O -o $@ $^

%.o: %.cpp
	g++ -Wall -Werror -std=c++14 -g -O -c $^
