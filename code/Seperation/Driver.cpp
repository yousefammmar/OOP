#include "12_Separation.h"
#include <iostream>

using namespace std;

int main()
{
    Rectangle r;
    r.setWidth(10);
    r.setHeight(15);
    r.printArea();

    Rectangle r2(10); 
    // this line will call the default parameterized constructor,
    // width = 10, height uses default value from .h file
    r2.printArea();

    Rectangle r3(10, 15); 
    // width = 10, height = 15 (no default used)
    r3.printArea();
}
