#include <iostream>
using namespace std;


int main()
{
    int x[]={5,4,3,5,1,7,5,7,7,6,6,6,6};
    int n=sizeof(x)/sizeof(int);

    for (int i=0;i<n;i++)
    {
        for (int j=i+2;j<n;j++){
            if(x[i]==x[j]){
                cout<<x[i]<<endl;
            }
        }
    }
    
}