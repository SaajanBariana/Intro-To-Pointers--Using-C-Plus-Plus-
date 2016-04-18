#include "UsingPointersAsReference.h"
#include <iostream>
using namespace std;

UsingPointersAsReference::UsingPointersAsReference()
{

}
void UsingPointersAsReference:: passByValue(int x)
{
    x = 99;

}
void UsingPointersAsReference:: passByReference(int *x)
{
    *x = 66;
}

void UsingPointersAsReference::TheMainMethod()
{
    int betty = 13;
    int sandy = 13;
    UsingPointersAsReference i;
    i.passByValue(betty);
    i.passByReference(&sandy);
    cout << "Betty is now: " << betty << endl;
    cout << "Sandy is now: " << sandy << endl;
}
