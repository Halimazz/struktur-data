#include <iostream>
using namespace std;


// Upin,Ipin,Fizi,dan Mail berlomba memetik buah rambutan
// sang pemenang akan memberikan buah rambutannya kepada kak ros
// buatlah program untuk menentukan berapa buah rambutan yang akan diberikan ke kak ros

int big(int a, int b) {
    if (a > b) {
        return a;
    } else {
        return b;
    }
}
// int main() {
//     int upin, ipin, fizi, mail;
//     cout << "Masukkan jumlah buah rambutan yang dipetik Upin: ";
//     cin >> upin;
//     cout << "Masukkan jumlah buah rambutan yang dipetik Ipin: ";
//     cin >> ipin;
//     cout << "Masukkan jumlah buah rambutan yang dipetik Fizi: ";
//     cin >> fizi;
//     cout << "Masukkan jumlah buah rambutan yang dipetik Mail: ";
//     cin >> mail;
//     cout << "Pemenang lomba dan memberikan " << big(big(big(upin, ipin), fizi), mail) << " buah rambutan ke kak ros" << endl;
//     return 0;
// }
int main(){
    int upin,ipin,fizi,mail,ui,fm,total;
    cout<<"Masukkan jumlah buah rambutan yang dipetik Upin: ";
    cin>>upin;
    cout<<"Masukkan jumlah buah rambutan yang dipetik Ipin: ";
    cin>>ipin;
    cout<<"Masukkan jumlah buah rambutan yang dipetik Fizi: ";
    cin>>fizi;
    cout<<"Masukkan jumlah buah rambutan yang dipetik Mail: ";
    cin>>mail;
    ui = big(upin, ipin);
    fm = big(fizi, mail);
    total = big(ui, fm);
    cout<<"Pemenang lomba dan memberikan "<<total<<" buah rambutan ke kak ros"<<endl;

}
