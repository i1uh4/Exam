#include "header.h"

int main() {
//Пример: пусть первое числа равно 4 + 2i, а второе 1 + 1i
    myComplex example1, example2;
    example1.intPart = 4.0; example1.imgPart = 2.0;
    example2.intPart = 1.0; example2.imgPart = 1.0;

//Ниже можете задать свои два комплексных числа, результат каждой операции записывается в первое число
//    float fNumber, sNumber;
//    myComplex example1, example2;
//
//    std::cout << "Input first number with space:\n";
//    std::cin >> fNumber >> sNumber;
//    example1.intPart = fNumber; example1.imgPart = sNumber;
//
//    std::cout << "Input second number with space:\n";
//    std::cin >> fNumber >> sNumber;
//    example2.intPart = fNumber; example2.imgPart = sNumber;

    myComplex* answ = plus(&example1, &example2);
    std::cout << answ -> intPart << " + " << answ -> imgPart << "i\n";

    answ = minus(&example1, &example2);
    std::cout << answ -> intPart << " + " << answ -> imgPart << "i\n";

    answ = multip(&example1, &example2);
    std::cout << answ -> intPart << " + " << answ -> imgPart << "i\n";

    answ = delenie(&example1, &example2);
    std::cout << answ -> intPart << " + " << answ -> imgPart << "i\n";

    return 0;
}
