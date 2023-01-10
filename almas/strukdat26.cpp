#include<iostream>
#include<stdlib.h>
using namespace  std;
#define MAX_STACK 10
void menu(int pil);
void pop();


int main(){
    int pilih;
    do{
        cout << "[1]Push Data"<<endl;
        cout << "[2]Pop Data"<<endl;
        cout << "[3]Print Data"<<endl;
        cout << "[4]Peek Top Index"<<endl;
        cout << "[0]Exit"<<endl;
        cout <<"Masukan Pilihan Anda = ";
        cin>>pilih;
        menu(pilih);
        
    }
    while(pilih!=0);
    return 0;
}
void menu(int pil){
    switch(pil){
        case 1: cout<<"fungsi/prosedur push data"<<endl;break;
        case 2:cout<<"fungsi/prosedur pop data"<<endl;break;
        case 3:cout<<"fungsi/prosedur print data"<<endl;break;
        case 4:cout<<"fungsi/prosedur peek top"<<endl;break;
        case 0:exit(0);break;
        default:cout<<"pilihan data tidak di temukan."<<endl;system("cls");break;
    }
}

bool isEmpty(){
    if(top==-1){
        return true;
    }
    else{
        return false;
    }
}

void pop(){
    if(isEmpty()){
        cout<<"tumpukan kosong";
    }
    else{
        top--;
        cout<<tumpuk[top];
    }
}
