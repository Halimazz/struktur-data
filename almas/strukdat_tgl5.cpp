#include<iostream>
using namespace std;
int main (){
    int x[] = {4,6,2,3,1,1,1,9,6};
    int i,j,n;
     n = sizeof(x)/sizeof(int);

    for (i=0; i<n; i++){
        for (j=i+1; j<n; j++){
            if (x[i] ==x[j]){
                return true;
                
            }
            else{
                return false;
            }
        }
        
    }
   
}