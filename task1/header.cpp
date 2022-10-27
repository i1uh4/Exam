#include "header.h"

long long factorial(const int &number) {
    if (number < 0) {
        return 0;
    }
    if (number == 0) {
        return 1;
    }
    return (number * factorial(number - 1));
}

bool checkInputData(std::string number) {
    for (char symb : number) {
        if (std::isalpha(symb)){
            return false;
        }
    }
    return true;
}

