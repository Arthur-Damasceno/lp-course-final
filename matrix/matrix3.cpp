#include <iostream>
#include <fstream>

using std::ifstream;
using std::cout;

#define ROWS 3
#define COLUMNS 2
#define PATH "data/matrix3.txt"

int main() {
    int matrixA[ROWS][COLUMNS];
    int matrixB[COLUMNS][ROWS];

    ifstream file;
    file.open(PATH);

    if (!file.is_open()) {
        cout << "Não foi possível abrir o arquivo\n";
        return 1;
    }

    for (int i = 0; i < ROWS; i++) {
        for (int j = 0; j < COLUMNS; j++) {
            file >> matrixA[i][j];
        }
    }

    for (int i = 0; i < COLUMNS; i++) {
        for (int j = 0; j < ROWS; j++) {
            file >> matrixB[i][j];
        }
    }

    int matrixC[ROWS][ROWS];

    matrixC[0][0] = matrixA[0][0] * matrixB[0][0] + matrixA[0][1] * matrixB[1][0];
    matrixC[0][1] = matrixA[0][0] * matrixB[0][1] + matrixA[0][1] * matrixB[1][1];
    matrixC[0][2] = matrixA[0][0] * matrixB[0][2] + matrixA[0][1] * matrixB[1][2];

    matrixC[1][0] = matrixA[1][0] * matrixB[0][0] + matrixA[1][1] * matrixB[1][0];
    matrixC[1][1] = matrixA[1][0] * matrixB[0][1] + matrixA[1][1] * matrixB[1][1];
    matrixC[1][2] = matrixA[1][0] * matrixB[0][2] + matrixA[1][1] * matrixB[1][2];

    matrixC[2][0] = matrixA[2][0] * matrixB[0][0] + matrixA[2][1] * matrixB[1][0];
    matrixC[2][1] = matrixA[2][0] * matrixB[0][1] + matrixA[2][1] * matrixB[1][1];
    matrixC[2][2] = matrixA[2][0] * matrixB[0][2] + matrixA[2][1] * matrixB[1][2];

    for (int i = 0; i < ROWS; i++) {
        cout << '[';

        for (int j = 0; j < ROWS; j++) {
            j + 1 == ROWS
                ? cout << matrixC[i][j]
                : cout << matrixC[i][j] << ' ';
        }

        cout << "]\n";
    }

    file.close();

    return 0;
}
