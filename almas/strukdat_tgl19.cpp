#include <iostream>
#include"reference.h"
using namespace std;




int main()
{
    int x = 5;
    int y = 10;
    cout << "Nilai x = " << x << endl;
    cout << "Nilai y = " << y << endl;
    tukar(&x, &y);
    cout << "Nilai x = " << x << endl;
    cout << "Nilai y = " << y << endl;
    float a = 5;
    float b = 0;
    cout << "Nilai a = " << a << endl;
    cout << "Nilai b = " << b << endl;
    pembagian(&a, &b);
    cout << "Nilai a = " << a << endl;
    cout << "Nilai b = " << b << endl;

    

    

    return 0;
}