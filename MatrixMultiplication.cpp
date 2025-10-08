#include <iostream>
using namespace std;

int main() {
    int rows1, cols1, rows2, cols2;

    cout << "Enter rows and columns of first matrix: ";
    cin >> rows1 >> cols1;
    cout << "Enter rows and columns of second matrix: ";
    cin >> rows2 >> cols2;

    if (cols1 != rows2) {
        cout << "Matrix multiplication not possible!" << endl;
        return 0;
    }

    int matrix1[rows1][cols1], matrix2[rows2][cols2], result[rows1][cols2] = {0};

    cout << "Enter elements of first matrix:\n";
    for (int i = 0; i < rows1; i++)
        for (int j = 0; j < cols1; j++)
            cin >> matrix1[i][j];

    cout << "Enter elements of second matrix:\n";
    for (int i = 0; i < rows2; i++)
        for (int j = 0; j < cols2; j++)
            cin >> matrix2[i][j];

    // Multiplication
    for (int i = 0; i < rows1; i++)
        for (int j = 0; j < cols2; j++)
            for (int k = 0; k < cols1; k++)
                result[i][j] += matrix1[i][k] * matrix2[k][j];

    cout << "Resultant matrix:\n";
    for (int i = 0; i < rows1; i++) {
        for (int j = 0; j < cols2; j++)
            cout << result[i][j] << " ";
        cout << endl;
    }

    return 0;
}
