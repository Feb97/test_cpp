#include <iostream>
#include "Shape.h"
#include "Square.h"
#include "Triangle.h"

using namespace std;

int main()
{
    Shape shp1(3, 4);
    Square sqr1(7, 8);
    Triangle tr1(9, 11);

    int bas = shp1.getBase();
    int bas2 = sqr1.getBase();
    int bas3 = tr1.getBase();

    cout << bas << endl;
    cout << bas2 << endl;
    cout << bas3 << endl;

}