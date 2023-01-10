#include <iostream>
using namespace std;


// Upin,Ipin, dan Fizi berlomba memetik buah rambutan
// sang pemenang akan memberikan buah rambutannya kepada kak ros
// buatlah program untuk menentukan berapa buah rambutan yang akan diberikan ke kak ros

void lomba(){
    int upin, ipin, fizi;
    cout << "Masukkan jumlah buah rambutan yang dipetik Upin: ";
    cin >> upin;
    cout << "Masukkan jumlah buah rambutan yang dipetik Ipin: ";
    cin >> ipin;
    cout << "Masukkan jumlah buah rambutan yang dipetik Fizi: ";
    cin >> fizi;
    if (upin > ipin && upin > fizi){
        cout << "Upin memenangkan lomba dan memberikan " << upin << " buah rambutan ke kak ros" << endl;
    } else if (ipin > upin && ipin > fizi){
        cout << "Ipin memenangkan lomba dan memberikan " << ipin << " buah rambutan ke kak ros" << endl;
    } else if (fizi > upin && fizi > ipin){
        cout << "Fizi memenangkan lomba dan memberikan " << fizi << " buah rambutan ke kak ros" << endl;
    } else {
        cout << "Upin, Ipin, dan Fizi memenangkan lomba dan memberikan " << upin + ipin + fizi << " buah rambutan ke kak ros" << endl;
    }
}
int main(){

    lomba();
    return 0;
    
}
