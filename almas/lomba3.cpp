#include <iostream>
using namespace std;


// Upin,Ipin,Fizi,dan Mail berlomba memetik buah rambutan
// sang pemenang akan memberikan buah rambutannya kepada kak ros
// buatlah program untuk menentukan berapa buah rambutan yang akan diberikan ke kak ros
void lomba3(){
    int upin, ipin, fizi, mail;
    cout << "Masukkan jumlah buah rambutan yang dipetik Upin: ";
    cin >> upin;
    cout << "Masukkan jumlah buah rambutan yang dipetik Ipin: ";
    cin >> ipin;
    cout << "Masukkan jumlah buah rambutan yang dipetik Fizi: ";
    cin >> fizi;
    cout << "Masukkan jumlah buah rambutan yang dipetik Mail: ";
    cin >> mail;
    if (upin > ipin && upin > fizi && upin > mail){
        cout << "Upin memenangkan lomba dan memberikan " << upin << " buah rambutan ke kak ros" << endl;
    } else if (ipin > upin && ipin > fizi && ipin > mail){
        cout << "Ipin memenangkan lomba dan memberikan " << ipin << " buah rambutan ke kak ros" << endl;
    } else if (fizi > upin && fizi > ipin && fizi > mail){
        cout << "Fizi memenangkan lomba dan memberikan " << fizi << " buah rambutan ke kak ros" << endl;
    } else if (mail > upin && mail > ipin && mail > fizi){
        cout << "Mail memenangkan lomba dan memberikan " << mail << " buah rambutan ke kak ros" << endl;
    } else {
        cout << "Upin, Ipin, Fizi, dan Mail memenangkan lomba dan memberikan " << upin + ipin + fizi + mail << " buah rambutan ke kak ros" << endl;
    }
}
int main(){

    lomba3();
    return 0;
    
}