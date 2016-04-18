#include "FirstIntroToReferences.h"
#include <iostream>
using namespace std;

FirstIntroToReferences::FirstIntroToReferences()
{
     int fish = 5;
    //&fish is the reference in the computer where fish is stored
    cout << &fish << endl;
    int *fishPointer;
    fishPointer = &fish;

    cout << fishPointer << endl;
}

