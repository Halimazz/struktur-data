#include <iostream>
using namespace std;


// Upin,Ipin, dan Fizi berlomba memetik buah rambutan
// sang pemenang akan memberikan buah rambutannya kepada kak ros
// buatlah program untuk menentukan berapa buah rambutan yang akan diberikan ke kak ros

int big(int a, int b) {
    if (a > b) {
        return a;
    } else {
        return b;
    }
}
int main() {
    int upin, ipin, fizi;
    cout << "Masukkan jumlah buah rambutan yang dipetik Upin: ";
    cin >> upin;
    cout << "Masukkan jumlah buah rambutan yang dipetik Ipin: ";
    cin >> ipin;
    cout << "Masukkan jumlah buah rambutan yang dipetik Fizi: ";
    cin >> fizi;
    cout << "Pemenang lomba dan memberikan " << big(big(upin, ipin), fizi) << " buah rambutan ke kak ros" << endl;
    return 0;
}
