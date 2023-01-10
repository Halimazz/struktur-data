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
 Film *prev;
};
Film *head,*tail,*current,*nodeBaru;


void Awal(string jdlFilm, string stdFilm,int thnFilm){
    head=new Film();
    head->judul=jdlFilm;
    head->sutradara=stdFilm;
    head->tahun=thnFilm;
    head->prev=NULL;
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
    head->prev=nodeBaru;
    head=nodeBaru;

     cout << "Data Baru Depan: \n" << jdlFilm<<", "<<stdFilm<<", "<<thnFilm<< " Masuk \n\n" ;
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
        head->next=NULL;
        head->prev=NULL;
    }
    else
    {
        while (current->next!=NULL)
        {
            current=current->next;
        }
        current->next=nodeBaru;
        nodeBaru->prev=current;
    }
   
    

    cout << "Data Belakang: \n" << jdlFilm<<", "<<stdFilm<<", "<<thnFilm<<" Masuk \n \n" ;
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


string jdlFilm[3]={"Thor"}; 
string stdFilm[3]={"Bayu Skak"};
int thnFilm[3]={2012};
int main(){
   int pilih, DataBaru;
    do
    {
        system("cls");
        cout << "1. Tambah Depan" << endl;
        cout << "2. Tambah Belakang" << endl;
        cout << "3. Hapus Depan" << endl;
        cout << "4. Hapus Belakang" << endl;
        cout<<"5. Hapus Data Tertentu"<<endl;
        cout << "6. Cetak" << endl;
        cout << "7. Panjang" << endl;
        cout << "8. Keluar" << endl;
        cout << "Pilih : ";
        cin >> pilih;
        switch (pilih)
        {
        case 1:
            for (int i=0;i<3;i++)
            {
                if (isEmpty())
                    Awal(jdlFilm[i],stdFilm[i],thnFilm[i]);
                else
                    tambahDepan(jdlFilm[i],stdFilm[i],thnFilm[i]);
            }
            break;
        case 2:
           
                    tambahBelakang(string jdlFilm,string stdFilm,int thnFilm);
            break;
    }

    


    }
    while (pilih!=8);
    return 0;
}
