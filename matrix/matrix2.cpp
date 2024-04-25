#include <iostream>
#include <fstream>

using std::ifstream;
using std::cout;

#define PATH "data/matrix2.txt"
#define ORDER 3

int main() {
    int matrixA[ORDER][ORDER];
    int matrixB[ORDER][ORDER];

    ifstream file;
    file.open(PATH);

    if (!file.is_open()) {
        cout << "Não foi possível abrir o arquivo\n";
        return 1;
    }

    for (int i = 0; i < ORDER * ORDER; i++) {
        file >> matrixA[i / ORDER][i % ORDER];
    }

    for (int i = 0; i < ORDER * ORDER; i++) {
        file >> matrixB[i / ORDER][i % ORDER];
    }

    int matrixC[ORDER][ORDER];

    matrixC[0][0] = matrixA[0][0] * matrixB[0][0] + matrixA[0][1] * matrixB[1][0] + matrixA[0][2] * matrixB[2][0];
    matrixC[0][1] = matrixA[0][0] * matrixB[0][1] + matrixA[0][1] * matrixB[1][1] + matrixA[0][2] * matrixB[2][1];
    matrixC[0][2] = matrixA[0][0] * matrixB[0][2] + matrixA[0][1] * matrixB[1][2] + matrixA[0][2] * matrixB[2][2];

    matrixC[1][0] = matrixA[1][0] * matrixB[0][0] + matrixA[1][1] * matrixB[1][0] + matrixA[1][2] * matrixB[2][0];
    matrixC[1][1] = matrixA[1][0] * matrixB[0][1] + matrixA[1][1] * matrixB[1][1] + matrixA[1][2] * matrixB[2][1];
    matrixC[1][2] = matrixA[1][0] * matrixB[0][2] + matrixA[1][1] * matrixB[1][2] + matrixA[1][2] * matrixB[2][2];

    matrixC[2][0] = matrixA[2][0] * matrixB[0][0] + matrixA[2][1] * matrixB[1][0] + matrixA[2][2] * matrixB[2][0];
    matrixC[2][1] = matrixA[2][0] * matrixB[0][1] + matrixA[2][1] * matrixB[1][1] + matrixA[2][2] * matrixB[2][1];
    matrixC[2][2] = matrixA[2][0] * matrixB[0][2] + matrixA[2][1] * matrixB[1][2] + matrixA[2][2] * matrixB[2][2];

    for (int i = 0; i < ORDER; i++) {
        cout << "[";

        for (int j = 0; j < ORDER; j++) {
            j + 1 == ORDER
                ? cout << matrixC[i][j]
                : cout << matrixC[i][j] << ' ';
        }

        cout << "]\n";
    }

    int determinant = matrixC[0][0] * matrixC[1][1] * matrixC[2][2]
        + matrixC[0][1] * matrixC[1][2] * matrixC[2][0]
        + matrixC[0][2] * matrixC[1][0] * matrixC[2][1]
        - matrixC[0][2] * matrixC[1][1] * matrixC[2][0]
        - matrixC[0][1] * matrixC[1][0] * matrixC[2][2]
        - matrixC[0][0] * matrixC[1][2] * matrixC[2][1];
    
    cout << "O determinante da matriz é " << determinant << '\n';

    file.close();

    return 0;
}
