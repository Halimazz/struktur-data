#include <iostream>
using namespace std;


int main()
{
    int arr[50],n;
    cout<<"ada berapa element"<<endl;
    cin>>n;
    cout<<"masukkan element"<<endl;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }


    cout<<"element yang sama adalah"<<endl;
    for(int i=0;i<n;i++){
        for (int j=i+1;j<n;j++){
            if(arr[i]==arr[j]){
               while(j<n){
                     arr[j]=arr[j+1];
                     j++;
               }
                n--;
            }
            else{
                continue;
            }
        }
    }
        for(int i=0;i<n;i++){
            cout<<arr[i]<<" ";
        }
           return 0;

    }
 




// #include <iostream>

// using namespace std;

// int main()
// {
//     int arr[50],n;
//     cout<<"how many elements?"<<endl;
//     cin>>n;
//     cout<<"enter the elements:"<<endl;
//     for(int i=0;i<n;i++)
//     {
//         cin>>arr[i];
//     }
//     cout<<"after removing the duplicates:"<<endl;
//     for(int i=0;i<n;i++)
//     {
//         for(int j=i+1;j<n;j++)
//          {
//             if(arr[i]==arr[j])
//             {
//                 while(j<n)
//                 {
//                     arr[j]=arr[j+1];
//                     j++;

//                 }
//                 --n;
//             }
//             else{
//                 continue;
//             }

//         }
//     }

//     for(int i=0;i<n;i++)
//     {
//         cout<<arr[i]<<" ";
//     }

//     return 0;
// }