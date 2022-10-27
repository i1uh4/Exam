#include "header.h"

int **generateMatrix(int n, int m) {
    int **matrix = new int* [n];
    for (int i = 0; i < n; ++i)
        matrix[i] = new int [m];

    std::cout << "Input variables of matrix:\n";
    int temp;
    for (int i = 0; i < n; ++i){
        for (int j = 0; j < m; ++j) {
            std::cin >> temp;
            matrix[i][j] = temp;
        }
    }
    return matrix;
}

bool checkSize(int m1, int m2) {
    return (m1 == m2);
}

int** multip(int** fMatrix, int** sMatrix, int n, int k) {
    int **answ = new int* [n];
    for (int i = 0; i < n; ++i)
        answ[i] = new int [k];
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < k; ++j) {
            int temp = 0;
            for (int m = 0; m < k; ++m) {
                temp += fMatrix[i][m] * sMatrix[m][j];
            }
            answ[i][j] = temp;
        }
    }
    return answ;
}

void print(int** answ, int n, int m) {
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) {
            std::cout << answ[i][j] << " ";
        }
        std::cout << "\n";
    }
}
