#include "header.h"

myComplex* plus(myComplex *num1, myComplex *num2) {
    myComplex* answ = new myComplex;
    answ -> intPart = num1 -> intPart + num2 -> intPart;
    answ -> imgPart = num1 -> imgPart + num2 -> imgPart;
    return answ;
}

myComplex* minus(myComplex *num1, myComplex *num2) {
    myComplex* answ = new myComplex;
    answ -> intPart = num1 -> intPart - num2 -> intPart;
    answ -> imgPart = num1 -> imgPart - num2 -> imgPart;
    return answ;
}

myComplex* delenie(myComplex *num1, myComplex *num2) {
    myComplex* answ = new myComplex;
    answ -> intPart = ((num1 -> intPart * num2 -> intPart) + (num1 -> imgPart * num2 -> imgPart)) / ((num2 -> intPart * num2 -> intPart) + (num2 -> imgPart * num2 -> imgPart));
    answ -> imgPart = ((num1 -> imgPart * num2 -> intPart) - (num1 -> intPart * num2 -> imgPart)) / ((num2 -> intPart * num2 -> intPart) + (num2 -> imgPart * num2 -> imgPart));
    return answ;
}

myComplex* multip(myComplex *num1, myComplex *num2) {
    myComplex* answ = new myComplex;
    answ -> intPart = (num1 -> intPart * num2 -> intPart) - (num1 -> imgPart * num2 -> imgPart);
    answ -> imgPart = (num1 -> intPart * num2 -> imgPart) + (num1 -> imgPart * num2 -> intPart);
    return answ;
}


