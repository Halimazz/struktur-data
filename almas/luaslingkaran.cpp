#include <iostream>
using namespace std;


void luaslingkaran(){
    float r, luas;
    cout << "Masukkan jari-jari lingkaran: ";
    cin >> r;
    luas = 3.14 * r * r;
    cout << "Luas lingkaran adalah: " << luas << endl;
}

int main(){

    luaslingkaran();
    return 0;
    
}
