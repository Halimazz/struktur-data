#include <iostream>
 
using namespace std;
 
int main()
{
//  cout << "##  Program C++ Deret Angka  ##" << endl;
//  cout << "===============================" << endl;
//  cout << endl;
 
//  int jumlah_deret,i,sum;
//  sum=0;
 
//  cout << "Jumlah deret yang diinginkan: ";
//  cin >> jumlah_deret;
 
//  cout << endl;
//  for (i=1;i<=jumlah_deret;i++) {
//    sum=i*jumlah_deret;
//     cout << sum << "+";
//  }
 
//  cout << endl;
//  string y;
//  y='123';
//  cout<<y;
//  float y[]={7.1,3.4,1.7,2.5,3.7};
//  float sum;
//  sum=0;
//  for (int i=0;i<5;i++){
//   sum+=y[i];
//  }
//  cout<<sum<<endl;
//  cout<<sizeof(y)/sizeof(float);
//  cout <<endl<<endl;

 int umur[5]={30,21,19,22,25};
 int umursama[5];
//  int x;
//  cin>> x;
//  for (int i=0;i<5;i++){
//   if(x==umur[i]){
//     cout<<"ketemu"<<endl;
//   }
//   else{
//     cout<<"ngga ada lurd";
//   }

for(int i=0;i<5;i++){
  int jumlah;
  for(int j=0;j<5;j++){
if(umur[i]==umursama[j]){
jumlah++;
}
 cout<<jumlah<<endl;
  }
}
return 0;
 }
 
