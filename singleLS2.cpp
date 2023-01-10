#include<iostream>
#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
using namespace std;

struct Film{
 string judul, sutradara;
 int tahun;

 Film *next;
};

Film *film1,*film2,*film3,*film4,*current,*head,*nodeBaru;

void create(string jdlFilm, string stdFilm,int thnFilm){
    head=new Film();
    head->judul=jdlFilm;
    head->sutradara=stdFilm;
    head->tahun=thnFilm;
    head->next=NULL;
}
void cetak(){
     current=head;
    while(current!=NULL){
        cout<<"Judul Film"<<current->judul<<endl;
        cout<<"Sutradara Film"<<current->sutradara<<endl;
        cout<<"Tahun Film keluar"<<current->tahun<<endl;
        cout<<"\n";
        current=current->next;
    }

}

void tambahDepan(string jdlFilm, string stdFilm,int thnFilm){
    nodeBaru=new Film();
    nodeBaru->judul=jdlFilm;
    nodeBaru->sutradara=stdFilm;
    nodeBaru->tahun=thnFilm;
    nodeBaru->next=head;
    head=nodeBaru;
}
// void tambahBelakang(string jdlFilm, string stdFilm,int thnFilm){
//    current=head;
//    while (current->next!=NULL)
//    {
//     current=current->next;
//    }
   
//     nodeBaru->judul=jdlFilm;
//     nodeBaru->sutradara=stdFilm;
//     nodeBaru->tahun=thnFilm;
//     nodeBaru->next=NULL;
//     current->next=nodeBaru;
// }
//buat tambah belakang 
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
    
}

int main(){
    
//    create(  "The Avengers", "Joss Whedon", 2012);
//    tambahDepan("Yo wis Ben","Bayu Skak",2015);
//     tambahDepan("Fast and Furious","Justin wan",2022);
//     tambahBelakang("Warkop DKI","Joss Whedon",2000);
//    cetak();
string jdlFilm,  stdFilm;
int thnFilm;
cout<<"create : \n";
cout<<"Masukkan Judul Film : ";
cin>>jdlFilm;
cout<<"Masukkan Sutradara Film : ";
cin>>stdFilm;
cout<<"Masukkan Tahun Film : ";
cin>>thnFilm;
create(jdlFilm,stdFilm,thnFilm);
cout<<"tambah depan coy : \n";
cout<<"Masukkan Judul Film : ";
cin>>jdlFilm;
cout<<"Masukkan Sutradara Film : ";
cin>>stdFilm;
cout<<"Masukkan Tahun Film : ";
cin>>thnFilm;
tambahDepan(jdlFilm,stdFilm,thnFilm);

cout<<"tambah belakngnya lurd : \n";
cout<<"Masukkan Judul Film : ";
cin>>jdlFilm;
cout<<"Masukkan Sutradara Film : ";
cin>>stdFilm;
cout<<"Masukkan Tahun Film : ";
cin>>thnFilm;
tambahBelakang(jdlFilm,stdFilm,thnFilm);

cetak();



}
