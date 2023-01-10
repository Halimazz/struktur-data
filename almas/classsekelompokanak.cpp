#include <iostream>
using namespace std;


// sekelompok berlomba memetik buah rambutan
// sang pemenang akan memberikan buah rambutannya kepada kak ros
// buatlah program untuk menentukan berapa buah rambutan yang akan diberikan ke kak ros

class peserta{
    int banding(int a, int b){
    if (a > b){
        return a;
    } else {
        return b;
    }
    }
    int jumlahPeserta;
    int pemenang;
    int i;
    int urutanPemenang;
    int peserta[100];
    string namaPeserta[100];
    public:
    void inputOutput(){
        // Memasukkan jumlah Peserta
        cout<<"Masukkan jumlah peserta: ";
        cin>>jumlahPeserta;
        // Memasukkan jumlah buah rambutan yang dipetik tiap peserta
        for (i = 0; i < jumlahPeserta; i++){
            cout<<"Masukkan nama peserta ke-"<<i+1<<": ";
            cin>>namaPeserta[i];
        }
        for (i = 0; i < jumlahPeserta; i++){
            cout<<"Masukkan jumlah buah rambutan yang dipetik peserta ke-"<<i+1<<" Oleh "<<namaPeserta[i]<<": ";
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
        // Menampilkan nama pemenang
        cout<<"Pemenang lomba adalah peserta ke-"<<urutanPemenang+1<<" yaitu "<<namaPeserta[urutanPemenang]<<" dan memberikan "<<pemenang<<" buah rambutan ke kak ros"<<endl;
    }
};

int main(){
    peserta pesertalomba;
    pesertalomba.inputOutput();
}
