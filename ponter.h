#include<iostream>
using namespace std;
int square1(int n){
    cout<<"alamat n1 di fungsi square1(): "<<&n<<endl;
    n*=n;
    return n;
}
void square2(int *n){
    cout<<"alamat n2 di prosedur square2():"<<n<<endl;
    *n*=*n;
}

void square3(int &n){  
    cout<<"alamat n3 di prosedur square3():"<<&n<<endl;
    n*=n;

}