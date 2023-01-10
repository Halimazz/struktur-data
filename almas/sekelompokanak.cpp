#include <iostream>
using namespace std;


// sekelompok berlomba memetik buah rambutan
// sang pemenang akan memberikan buah rambutannya kepada kak ros
// buatlah program untuk menentukan berapa buah rambutan yang akan diberikan ke kak ros
int banding(int a, int b){
    if (a > b){
        return a;
    } else {
        return b;
    }
}
int main(){

    int peserta[100];
    int jumlahPeserta;
    int pemenang;
    int i;
    int urutanPemenang;
   // Memasukkan jumlah Peserta
    cout<<"Masukkan jumlah peserta: ";
    cin>>jumlahPeserta;
    // Memasukkan jumlah buah rambutan yang dipetik tiap peserta
    for (i = 0; i < jumlahPeserta; i++){
        cout<<"Masukkan jumlah buah rambutan yang dipetik peserta ke-"<<i+1<<": ";
        cin>>peserta[i];
    }
    // Mencari pemenang
    pemenang = peserta[0];
    for (i = 1; i < jumlahPeserta; i++){
        pemenang = banding(pemenang, peserta[i]);
    }
    // Mencari Urutan pemenang
    for (i = 0; i < jumlahPeserta; i++){
        if (pemenang == peserta[i]){
            urutanPemenang = i;
        }
    }
    // Menampilkan pemenang
    cout<<"Pemenang lomba adalah peserta ke-"<<urutanPemenang+1<<" dan memberikan "<<pemenang<<" buah rambutan ke kak ros"<<endl;
    

}

