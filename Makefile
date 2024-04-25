clean:
	rm *.out *.o

matrix1: matrix/matrix1.cpp
	g++ matrix/matrix1.cpp -o matrix1.out
	./matrix1.out

matrix2: matrix/matrix2.cpp
	g++ matrix/matrix2.cpp -o matrix2.out
	./matrix2.out