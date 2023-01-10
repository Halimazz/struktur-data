#include<iostream>
#include<conio.h>
#include<stdlib.h>
using namespace std;
#define max 10
struct Antrian{
int nomer [max];
int head=-1;
int tail=-1;
};
Antrian antree;
bool isEmpty();
bool isFull();
void enqueue(int);
void dequeue();
void clear();
void view();



int main(){
    int pilih,p=1,urut;
    do{
        system("cls");
        cout<<"Head ="<<antree.head<<" Tail = "<<antree.tail<<endl;
        cout<<"1. Enqueue"<<endl;
        cout<<"2. Dequeue"<<endl;
        cout<<"3. Clear"<<endl;
        cout<<"4. View"<<endl;
        cout<<"5. Exit"<<endl;
        cout<<"Pilih : ";
        cin>>pilih;
        switch(pilih){
            case 1:
             if (isFull()){
                cout<<"Antrian Penuh";
                
            }
            else{
                cout<<"Masukkan nomor antrian : ";
                cin>>urut;
                enqueue(urut);
               
                cout<<"Data berhasil dimasukkan";
             break;  
            }
            case 2:
             cout<<"NO Antrian = "<<antree.nomer[antree.head];
             dequeue();
             cout<<"Antrian Berhasil keluar\n";
                break;
            case 3:
                clear();
                cout<<"Antrian berhasil di clear";
                break;
            case 4:
                view();
                break;
            case 5:
                exit(0);
                break;
            default:    
                cout<<"Pilihan tidak ada";
                break;
            
        }
        getch();
    }while(p==1);
    return 0;
}
       
   bool isEmpty(){
    if(antree.tail==-1){
        return true;
    }
    else{
        return false;
    }
};
bool isFull(){
    if (antree.tail == max -1){
        return true;
    }
    else{
        return false;
    }
}
void enqueue(int data){
    if(isEmpty()){
        antree.head=antree.tail=0;
        antree.head=antree.tail=data;
    }
    else{
        antree.tail++;
    }
    antree.nomer[antree.tail]=data;
}
void dequeue(){
    if(isEmpty()){
        cout<<"Antrian kosong!";
        getch();
    }
    else{
        int e=antree.nomer[antree.head];
        for(int i=antree.head;i<antree.tail-1;i++){
            antree.nomer[i]=antree.nomer[i+1];
        }
        antree.tail--;
        

    }
}
void clear(){
    antree.head=antree.tail=-1;
}
void view(){
    if(isEmpty()){
        cout<<"Antrian kosong";
    }
    else{
        system("cls");
        for(int i=antree.head;i<=antree.tail;i++){
            cout<<antree.nomer[i]<<",";
        }

    }

}