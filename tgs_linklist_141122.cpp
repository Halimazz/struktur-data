#include <iostream>
#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include<string.h>
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

void sisipAntara(string jdlFilm, string stdFilm,int thnFilm){ 
    Film *baru=new Film;
    baru->judul=jdlFilm;
    baru->sutradara=stdFilm;
    baru->tahun=thnFilm;
    baru->next=NULL;
    Film *temp;
    int posisi;

    if (isEmpty()==0){
        cout<<"Anda ingin menyisipkan data setelah index ke? ";
        cin>>posisi;
        int i = 1;
        temp=head;
        while(i > posisi-1 && temp->next!=NULL) {
            temp = temp->next;
            posisi++;
        }
        if(i > posisi-1) {
            cout<<"Index tidak tersedia. Silakan masukkan index yang lain."<<endl;
            return;
        }
        baru->next=temp->next;
        temp->next=baru;
    }
    else {
        cout<<"Index tidak tersedia. Silakan masukkan index yang lain."<<endl;
        getch();
    }
    cout << "Data Baru: \n" << jdlFilm<<", "<<stdFilm<<", "<<thnFilm<< ", Masuk" << endl;
}

void urutTahun(){
Film *bantu;
Film *bantu2;


bantu=head;
bantu2=head;

cout<<" Data Film urut Tahun"<<endl;

    if (isEmpty() == true)
    {
        cout<<"Data Kosong"<<endl;    
    }

    else{
        while(bantu!=NULL){
            while(bantu2!=NULL){
                if(bantu->tahun>bantu2->tahun){
                    string tempJudul = bantu->judul;
                    string tempSutradara = bantu->sutradara;
                    int tempTahun = bantu->tahun;
                    bantu->judul = bantu2->judul;
                    bantu->sutradara = bantu2->sutradara;
                    bantu->tahun = bantu2->tahun;
                    bantu2->judul=tempJudul;
                    bantu2->sutradara=tempSutradara;
                    bantu2->tahun=tempTahun;
                }
                bantu2=bantu2->next;
            }
            bantu=bantu->next;
            bantu2=head;

        }
        bantu=head;
        int i=0;
        while(bantu!=NULL && i<5){
            cout<<i+1<<"."<<bantu->judul<<", "<<bantu->sutradara<<", "<<bantu->tahun<<endl;
            bantu=bantu->next;
            i++;
        }
    }
}
void hapusDepan ()
{
    Film *hapus;
    int d;
    if (!isEmpty())
    {
        if(head->next !=NULL)
        {
            hapus = head;
            d = hapus->tahun;
            head = hapus->next;
            delete hapus;
        }
        else
        {
            d = head->tahun;
            head = NULL;
        }
        cout << d <<"Terhapus" << endl;
    }
    else cout << "Masih Kosong" << endl;
}

void hapusBelakang ()
{
    Film *hapus, *bantu;
    int tmp;
    if (!isEmpty())
    {
        if (head->next!=NULL)
        {
            bantu = head;
            while (bantu->next->next!=NULL)
            {
                bantu = bantu->next;
            }
            hapus = bantu->next;
            tmp = hapus->tahun;
            bantu->next=NULL;
            delete hapus;
        }
        else
        {
            tmp=head->tahun;
            head=NULL;
        }
        cout <<  tmp <<  "Terhapus" << endl;
    }
    else cout << "Masih Kosong" << endl;
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
        cout << "5. Urut Tahun" << endl;
        cout << "6. Sisip Antara" << endl;
        cout << "7. Hapus Depan" << endl;
        cout << "8. Hapus Belakang" << endl;
        cout << "9. Keluar" << endl;
        cout << "Pilih : ";
        cin >> pilih;
        switch (pilih)
        {
            case 1: 
                cout << "Judul Film : ";
                getline(cin>>ws,jdlFilm);
                cout << "Sutradara Film : ";
                getline(cin>>ws, stdFilm);
                cout << "Tahun Film keluar : ";
                cin >> thnFilm;
                    awal(jdlFilm, stdFilm, thnFilm);
                break;
        case 2:
            cout << "Masukkan Data judul Film: ";
            getline(cin>>ws,jdlFilm);
            cout << "Masukkan Data Sutradara Film: ";
            getline(cin>>ws, stdFilm);
            cout << "Masukkan Data Tahun Film: ";
            cin >> thnFilm;
            tambahDepan(jdlFilm, stdFilm, thnFilm);
            break;
        case 3:
            cout << "Masukkan Data Judul Film" << endl;
            getline(cin>>ws,jdlFilm);
            cout << "Masukkan Data Sutradara Film: ";
            getline(cin>>ws, stdFilm);
            cout << "Masukkan Data Tahun Film: ";
            cin >> thnFilm;
            tambahBelakang(jdlFilm, stdFilm, thnFilm);
            break;
        
        case 4:
            Cetak();
            break;
        case 5:
            urutTahun();
            break;
        case 6:
            cout << "Masukkan Data Judul Film" << endl;
            getline(cin>>ws,jdlFilm);
            cout << "Masukkan Data Sutradara Film: ";
            getline(cin>>ws, stdFilm);
            cout << "Masukkan Data Tahun Film: ";
            cin >> thnFilm;
            sisipAntara(jdlFilm, stdFilm, thnFilm);
            break;
        case 7:
        hapusDepan();
        break;
        case 8:
        hapusBelakang();
        break;
        
        }
        
        getch();
    }
    while (pilih!=9);
    return 0;
}
