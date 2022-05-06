#include <iostream>
#include "OOP_DZ8.h"

int main()
{
    Student lexa;
    cin >> lexa;
    cout << lexa;
    cout << endl;
    Student vanya;
    cin >> vanya;
    lexa = vanya;
    cout << lexa << endl;
}