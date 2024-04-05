#include<iostream>
using namespace std;
int main(){
cout<<"Hello world!";
int arr[5],rev[5];
rev[5]={0};
cout<<"Enter values for array\n";
for(int i=0;i<5;i++){
    cin>>arr[i];
}
cout<<"The original array is:\n";
for(int x=0;x<5;x++){
cout<<"\n"<<arr[x];
}
for(int j=0;j<5;j++){
rev[j]=arr[4-j];
     } 
     cout<<"\nThe reveresed array is:\n";
       for(int y=0;y<5;y++){
       cout<<"\n"<<rev[y]<<"\t";
       }
        return 0;
        }