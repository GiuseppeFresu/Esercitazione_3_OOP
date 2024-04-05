#ifndef __COMPLEXNUMBER_H
#define __COMPLEXNUMBER_H

#include <iostream>

struct ComplexNumber
{
    double real;
    double imag;

    // Constructor
    ComplexNumber(double r, double i):
        real(r),
        imag(i)
    {}

    // Function to print complex number
    void print();

    // + operator
    ComplexNumber operator+(const ComplexNumber &c);

    // == operator
    bool operator==(const ComplexNumber &c);

    // Function to compute conjugate
    ComplexNumber conjugate();

};

#endif
