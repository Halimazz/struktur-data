#include<iostream>

using namespace std;

int brp_hari;
int sisabagi;


int main(){
cin>>brp_hari;
cout<<"jika hari ini hari selasa, maka hari ke-"<<brp_hari<<" adalah hari ";
sisabagi = brp_hari%7;
if(sisabagi==0){
cout<<"selasa";
}else if(sisabagi==1){
cout<<"rabu";
}else if(sisabagi==2){
cout<<"kamis";
}else if(sisabagi==3){
cout<<"jumat";
}else if(sisabagi==4){
cout<<"sabtu";
}else if(sisabagi==5){
cout<<"minggu";
}
else if(sisabagi==6){
    cout<<"senin";
}
return 0;
}
