clean:
	rm *.out *.o

matrix1: matrix/matrix1.cpp
	g++ matrix/matrix1.cpp -o matrix1.out
	./matrix1.out