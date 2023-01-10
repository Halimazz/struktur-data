#include<iostream>
#include"ponter.h"
using namespace std;

int pangkat(int&x){
  return  x*=x;
     
    
}
int main(){

//     int a,b;
//     a=3;
//     b=pangkat(a);

// int var=20;
// int*ptr;

// ptr=&var;

// cout<<"NIlai Pada variabel ptr="<<ptr<<endl;
// cout<<"NIlai Pada variabel var="<<var<<endl;
// cout<<"NIlai Pada variabel *ptr="<<*ptr<<endl;
// cout<<"A ="<<a<<b<<endl;
// cout<<pangkat;
// return 0;
int n1=8;
cout<<"alamat n1 di fungsi main():"<<&n1<<endl;
cout<<"kuadrat dari n1:"<<square1(n1)<<endl;
cout<<"tidak ada perubahan di n1 :"<<n1<<endl;

int n2 =8;
cout<<"alamat fungsi dari n2 di main():"<<&n2<<endl;square2(&n2);
cout<<"kuadrat dari n2:"<<n2<<endl;
cout<<" perubahan di n2 :"<<n2<<endl;

int n3 =8;
cout<<"alamat fungsi dari n3 di main():"<<&n3<<endl;
square3(n3);
cout<<"kuadrat dari n3:"<<n3<<endl;
cout<<" perubahan di n3 :"<<n3<<endl;


}