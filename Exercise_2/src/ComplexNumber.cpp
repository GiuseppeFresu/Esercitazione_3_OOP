#include "ComplexNumber.hpp"

using namespace std;

// Function to print the complex number
void ComplexNumber::print()
{
    cout << real;
    if (imag >= 0)
        cout << "+" << imag << "i";
    else
        cout << imag << "i";
}

// + operator
ComplexNumber ComplexNumber::operator+(const ComplexNumber &c)
{
    return ComplexNumber(real + c.real, imag + c.imag);
}

// == operator
bool ComplexNumber::operator==(const ComplexNumber &c)
{
    return (real == c.real) && (imag == c.imag);
}

// Function to compute conjugate
ComplexNumber ComplexNumber::conjugate()
{
    return ComplexNumber(real, -imag);
}
