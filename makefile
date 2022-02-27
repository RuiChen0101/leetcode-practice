.PHONY: clean test

all: directories main

main: main.cpp
	g++ -std=c++14 main.cpp -o bin/main

directories:
	mkdir -p bin

clean:
	rm -rf bin
	
test: all
	bin/ut_all