#include <iostream>
#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

using namespace std;

struct Film{
 string judul, sutradara;
 int tahun;

 Film *next;
};
Film *head,*tail,*current,*nodeBaru;

void awal(string jdlFilm, string stdFilm,int thnFilm){
    head=new Film();
    head->judul=jdlFilm;
    head->sutradara=stdFilm;
    head->tahun=thnFilm;
    head->next=NULL;

    cout << "Data Baru: \n" << jdlFilm<<", "<<stdFilm<<", "<<thnFilm<< ", " << endl;
}

bool isEmpty()
{
    if (head==NULL)
        return true;
    return false;
}

void tambahDepan(string jdlFilm, string stdFilm,int thnFilm){
    nodeBaru=new Film();
    nodeBaru->judul=jdlFilm;
    nodeBaru->sutradara=stdFilm;
    nodeBaru->tahun=thnFilm;
    nodeBaru->next=head;
    head=nodeBaru;

     cout << "Data Baru: \n" << jdlFilm<<", "<<stdFilm<<", "<<thnFilm<< ", " << endl;
}
void tambahTengah(string jdlFilm,string stdFilm,int thnFilm){
    
}


void tambahBelakang(string jdlFilm, string stdFilm,int thnFilm){
    nodeBaru = new Film();
    current=head;
    nodeBaru->judul=jdlFilm;
    nodeBaru->sutradara=stdFilm;
    nodeBaru->tahun=thnFilm;
    nodeBaru->next=NULL;
    if (current==NULL)
    {
        head=nodeBaru;
    }
    else
    {
        while (current->next!=NULL)
        {
            current=current->next;
        }
        current->next=nodeBaru;
    }
   
    

    cout << "Data Belakang: \n" << jdlFilm<<", "<<stdFilm<<", "<<thnFilm<<" Masuk"  << endl;
}

// void hapusDepan ()
// {
//     Data *hapus;
//     int d;
//     if (!isEmpty())
//     {
//         if(head->next !=NULL)
//         {
//             hapus = head;
//             d = hapus->nilai;
//             head = hapus->next;
//             delete hapus;
//         }
//         else
//         {
//             d = head->nilai;
//             head = NULL;
//         }
//         cout << d <<"Terhapus" << endl;
//     }
//     else cout << "Masih Kosong" << endl;
// }


// void hapusBelakang ()
// {
//     Data *hapus, *bantu;
//     int tmp;
//     if (!isEmpty())
//     {
//         if (head->next!=NULL)
//         {
//             bantu = head;
//             while (bantu->next->next!=NULL)
//             {
//                 bantu = bantu->next;
//             }
//             hapus = bantu->next;
//             tmp = hapus->nilai;
//             bantu->next=NULL;
//             delete hapus;
//         }
//         else
//         {
//             tmp=head->nilai;
//             head=NULL;
//         }
//         cout <<  tmp <<  "Terhapus" << endl;
//     }
//     else cout << "Masih Kosong" << endl;
// }

void Cetak(){
     current=head;
    while(current!=NULL){
        cout<<"Judul Film : "<<current->judul<<endl;
        cout<<"Sutradara Film : "<<current->sutradara<<endl;
        cout<<"Tahun Film keluar : "<<current->tahun<<endl;
        cout<<"\n";
        current=current->next;
    }

}


// int panjang ()
// {
//     int count=0;
//     if (!isEmpty())
//     {
//         count=1;
//         Data *bantu;
//         bantu=head;
//         if (bantu->next==NULL)
//         {
//             count=1;
//         }
//         else
//         {
//             do
//             {
//                 count++;
//                 bantu=bantu->next;
//             }
//             while (bantu->next!=NULL);
//         }
//     }
//     else
//     {
//         count=0;
//     }
//     return count;
// }

int main()
{
    string jdlFilm, stdFilm;
    int pilih, thnFilm;
    do
    {
        system("cls");
        cout << "Menu : " << endl;
        cout << "1. Buat baruu" << endl;
        cout << "2. Tambah Depan" << endl;
        cout << "3. Tambah Belakang" << endl;
        cout << "4. Cetak" << endl;
        cout << "5. Keluar" << endl;
        cout << "Pilih : ";
        cin >> pilih;
        switch (pilih)
        {
            case 1: 
                cout << "Judul Film : ";
                cin >> jdlFilm;
                cout << "Sutradara Film : ";
                cin >> stdFilm;
                cout << "Tahun Film keluar : ";
                cin >> thnFilm;
                    awal(jdlFilm, stdFilm, thnFilm);
                break;
        case 2:
            cout << "Masukkan Data judul Film: ";
            cin >> jdlFilm;
            cout << "Masukkan Data Sutradara Film: ";
            cin >> stdFilm;
            cout << "Masukkan Data Tahun Film: ";
            cin >> thnFilm;
            tambahDepan(jdlFilm, stdFilm, thnFilm);
            break;
        case 3:
            cout << "Masukkan Data Judul Film" << endl;
            cin >> jdlFilm;
            cout << "Masukkan Data Sutradara Film: ";
            cin >> stdFilm;
            cout << "Masukkan Data Tahun Film: ";
            cin >> thnFilm;
            tambahBelakang(jdlFilm, stdFilm, thnFilm);
            break;
        
        case 4:
            Cetak();
            break;
        }
        getch();
    }
    while (pilih!=5);
    return 0;
}
//     awal();
//     tambahDataBelakang(5);
//     tambahDataDepan(7);
//     tambahDataBelakang(17);
//     tambahDataBelakang(1);
//     tambahDataBelakang(27);
//     tambahDataBelakang(10);
//     cout << "Data pada single linked list non circular:" << endl;
//     Cetak();
//     cout << "Data paling depan dihapus:" << endl;
//     hapusDepan();
//     cout << "Data pada single linked list non circular:" << endl;
//     Cetak();
//     cout << "Data paling belakang dihapus:" << endl;
//     hapusBelakang();
//     cout << "Data pada single linked list non circlar:" << endl;
//     Cetak();
//     cout << "Panjang linked list :" << endl;
//     cout << panjang();
//     getch();
//     return 0;
// }