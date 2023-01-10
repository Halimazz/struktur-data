#include <iostream>
using namespace std;


void tukar(int *a, int *b)
{
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
}
void pembagian(float *a, float *b)
{
    int temp;
    if(*a==0){
        cout<<"valid Pembagian dapat dilakukan"<<endl;
         temp = *a;
        *a = *b;
        *b = temp;
    }
    else if(*b==0){
        cout<<"valid Pembagian tidak dapat dilakukan"<<endl;
    }
    els  e if(a!=0 &&b!=0){
        cout<<"valid Pembagian dapat dilakukan"<<endl;
         temp = *a;
        *a = *b;
        *b = temp;
    };
    
}