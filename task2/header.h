#ifndef HEADER_H
#define HEADER_H

#include <iostream>

typedef struct myComplex{
    float intPart, imgPart;
}myComplex;

myComplex* plus(myComplex *num1, myComplex *num2);
myComplex* minus(myComplex *num1, myComplex *num2);
myComplex* delenie(myComplex *num1, myComplex *num2);
myComplex* multip(myComplex *num1, myComplex *num2);

#endif
