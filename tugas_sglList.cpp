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
        // head->next=NULL;
        // head->prev=NULL;
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
