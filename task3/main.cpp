#include "header.h"

int main() {
//Пусть первая матрица с размерами 2х2 и имеет вид
// 1 2
// 3 4
//Пусть вторая матрица с размерами 2х2 и имеет вид
// 4 3
// 2 1
    int n = 2, m1 = 2, m2 = 2, k = 2;
    int **matrix1 = generateMatrix(n, m1);
    int **matrix2 = generateMatrix(m2, k);

//Ниже ручное создание и заполнение матриц
//    int n, m1, m2, k;
//    std::cout << "Input size of first matrix(NxM):\n";
//    std::cin >> n >> m1;
//    int **matrix1 = generateMatrix(n, m1);
//    std::cout << "Input size of second matrix(MxK):\n";
//    std::cin >> m2 >> k;
//    int **matrix2 = generateMatrix(m2, k);

    if (!checkSize(m1, m2)) {
        std::cout << "We can not mutliplicate matrix\n";
        return -1;
    }
    int** answ = multip(matrix1, matrix2, n, k);
    print(answ, n, k);
}
