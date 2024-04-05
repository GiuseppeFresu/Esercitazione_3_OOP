#include <iostream>
#include "ComplexNumber.hpp"

using namespace std;

int main()
{
    // Example
    ComplexNumber c1(1, 2);
    ComplexNumber c2(1, -2);

    // Printing complex numbers
    cout << "Complex number c1: ";
    c1.print();
    cout << endl;

    cout << "Complex number c2: ";
    c2.print();
    cout << endl;

    // Adding two complex numbers
    ComplexNumber c = c1 + c2;
    cout << "Sum of c1 and c2: ";
    c.print();
    cout << endl;


    // Testing equality
    cout << "c1 == c2: " << boolalpha << (c1 == c2) << endl;

    // Computing conjugate
    ComplexNumber conjugateOfC1 = c1.conjugate();
    cout << "Conjugate of c1: ";
    conjugateOfC1.print();
    cout << endl;

    ComplexNumber conjugateOfC2 = c2.conjugate();
    cout << "Conjugate of c2: ";
    conjugateOfC2.print();
    cout << endl;

    return 0;
}
