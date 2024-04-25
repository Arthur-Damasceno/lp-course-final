clean:
	rm *.out *.o

queue: dataStructures/queue.cpp queuelib.o
	g++ dataStructures/queue.cpp queuelib.o -o queue.out
	./queue.out

queuelib.o: dataStructures/lib/queue.cpp
	g++ -c dataStructures/lib/queue.cpp -o queuelib.o

stack: dataStructures/stack.cpp stacklib.o
	g++ dataStructures/stack.cpp stacklib.o -o stack.out
	./stack.out

stacklib.o: dataStructures/lib/stack.cpp
	g++ -c dataStructures/lib/stack.cpp -o stacklib.o

matrix1: matrix/matrix1.cpp
	g++ matrix/matrix1.cpp -o matrix1.out
	./matrix1.out

matrix2: matrix/matrix2.cpp
	g++ matrix/matrix2.cpp -o matrix2.out
	./matrix2.out

matrix3: matrix/matrix3.cpp
	g++ matrix/matrix3.cpp -o matrix3.out
	./matrix3.out