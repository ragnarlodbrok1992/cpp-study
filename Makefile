MAIN=src/main.cpp

all: ${MAIN}
	g++ -std=c++17 -o cpp-study ${MAIN}