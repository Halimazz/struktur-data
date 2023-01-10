#include<iostream>
using namespace std;
#define MAX 8

struct Antrian{
 int data[MAX];
 int head; 
 int tail;
};
Antrian antree;
bool isEmpty();
bool isFull();
void enqueue(int);
int dequeue();
void tampil();

int main(){
// fungsi utamaaa 
    int pilih, data;
    char ulang;
  
    do{
    system("cls");
    cout<<"Antre"<< antree.data<<endl;
    cout<<"Head : "<<antree.head<<" Tail :"<<antree.tail<<endl;
    cout<<"Menu Antrian"<<endl;
    cout<<"1. Enqueue"<<endl;
    cout<<"2. Dequeue"<<endl;
    cout<<"3. Tampil"<<endl;
    cout<<"4. Keluar"<<endl;
    cout<<"Pilih : ";cin>>pilih;
    switch(pilih){
    case 1:
        cout<<"Masukkan data : ";cin>>data;
        enqueue(data);
        break;
    case 2:
        dequeue();
        break;
    case 3:
        tampil();
        break;
    case 4:
        cout<<"Keluar"<<endl;
        break;
    default:
        cout<<"Pilihan tidak ada"<<endl;
        break;
    }
    cout<<"Kembali ke menu (y/n) ? ";cin>>ulang;
    }while(ulang=='y'||ulang=='Y');
    
}

bool isEmpty(){
    if(antree.tail==-1){
        return true;
    }
    else{
        return false;
    }
}
bool isFull(){
    if(antree.tail== MAX-1){
        return true;
    }
    else{
        return false;
    }
}
void enqueue(int data){
    if(!isEmpty()){
        antree.head=antree.tail=0;
        antree.head=antree.tail=data;
        cout<<"Data "<<data<<" masuk ke antrian"<<endl;
    }
    else{

        antree.tail++;
        
        cout<<"Data "<<data<<" masuk ke antrian"<<endl;
    }
    antree.data[antree.tail]=data;
    
}
int dequeue(){
    int i;
    int e=antree.data[antree.head];
    for(i=antree.head;i<antree.tail-1;i++){
        antree.data[i]=antree.data[i+1];

    }
    antree.tail--;
    return e;
    cout<<"Data "<<e<<" keluar dari antrian"<<endl;
    

}
void tampil(){
    if(isEmpty()){
        cout<<"Antrian kosong"<<endl;
    }
    else{
        int i;
        cout<<"Data antrian : "<<endl;
        for(i=antree.head;i<=antree.tail;i++){
            cout<<antree.data[i]<<endl;
        }
    }
}
