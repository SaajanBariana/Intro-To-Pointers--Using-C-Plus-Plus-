#include "MathWithPointers.h"
#include <iostream>

using namespace std;

MathWithPointers::MathWithPointers()
{
    //ctor
}

void MathWithPointers:: TheMainMethod()
{
    int array[5];
    int *array0 = &array[0];
    int *array1 = &array[1];
    int *array2 = &array[2];
    int *array3 = &array[3];

    cout << "array0 is : " << array0 << endl;
    cout << "array1 is at: " << array1 << endl;
    cout << "array2 is at: " << array2 << endl;
    cout << "array3 is at: " << array3 << endl;
    array1 += 2;
    cout << "array1 is now at: " << array1 << endl;

}
