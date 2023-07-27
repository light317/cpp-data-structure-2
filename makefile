all: build run


build:
	g++ -I ./include/ -o ./lib/Node.o -c ./src/Node.cpp
	g++ -I ./include/ -o ./lib/NodeList.o -c ./src/NodeList.cpp
	g++ -I ./include/ -o ./lib/CentralNode.o -c ./src/CentralNode.cpp
	g++ -I ./include/ -o ./lib/CentralNodeList.o -c ./src/CentralNodeList.cpp
	g++ -I ./include/ -o ./lib/FileReader.o -c ./src/FileReader.cpp

	g++ -I ./include/ -o ./bin/main ./lib/Node.o ./lib/NodeList.o ./lib/CentralNode.o ./lib/CentralNodeList.o ./lib/FileReader.o ./src/main.cpp

run:
	./bin/main