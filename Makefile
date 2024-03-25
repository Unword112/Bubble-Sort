all: ArrayList.o main.o ArrayStack.o
	g++ ArrayList.o main.o ArrayStack.o -o Array

LinkedList.o: LinkedList.cpp
	g++ -c LinkedList.cpp -o LinkedList.o  

main.o: main.cpp
	g++ -c main.cpp -o main.o 

ArrayStack.o: ArrayStack.cpp
	g++ -c ArrayStack.cpp -o ArrayStack.o
    
clean:
	rm -f *.o Array