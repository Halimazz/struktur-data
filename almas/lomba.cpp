#include <iostream>
using namespace std;


// Upin dan Ipin berlomba memetik buah rambutan
// sang pemenang akan memberikan buah rambutannya kepada kak ros
// buatlah program untuk menentukan berapa buah rambutan yang akan diberikan ke kak ros

void lomba(){
    int upin, ipin;
    cout << "Masukkan jumlah buah rambutan yang dipetik Upin: ";
    cin >> upin;
    cout << "Masukkan jumlah buah rambutan yang dipetik Ipin: ";
    cin >> ipin;
    if (upin > ipin){
        cout << "Upin memenangkan lomba dan memberikan " << upin << " buah rambutan ke kak ros" << endl;
    } else if (ipin > upin){
        cout << "Ipin memenangkan lomba dan memberikan " << ipin << " buah rambutan ke kak ros" << endl;
    } else {
        cout << "Upin dan Ipin memenangkan lomba dan memberikan " << upin + ipin << " buah rambutan ke kak ros" << endl;
    }
}
int main(){

    lomba();
    return 0;
    
}