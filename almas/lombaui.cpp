#include <iostream>
using namespace std;

// Upin dan Ipin berlomba memetik buah rambutan
// sang pemenang akan memberikan buah rambutannya kepada kak ros
// buatlah program untuk menentukan berapa buah rambutan yang akan diberikan ke kak ros
int small(int a, int b) {
    if (a < b) {
        return a;
    } else {
        return b;
    }
}
// int main() {
//     int upin, ipin;
//     cout << "Masukkan jumlah buah rambutan yang dipetik Upin: ";
//     cin >> upin;
//     cout << "Masukkan jumlah buah rambutan yang dipetik Ipin: ";
//     cin >> ipin;
//     cout << "Pemenang lomba dan memberikan " << big(upin, ipin) << " buah rambutan ke kak ros" << endl;
//     return 0;
// }

int main(){
    int upin,ipin,ui;
    cout<<"Masukkan jumlah buah rambutan yang dipetik Upin: ";
    cin>>upin;
    cout<<"Masukkan jumlah buah rambutan yang dipetik Ipin: ";
    cin>>ipin;
    ui = small(upin,ipin);
    cout<<"  memberikan "<<ui<<" buah rambutan ke kak ros"<<endl;
}