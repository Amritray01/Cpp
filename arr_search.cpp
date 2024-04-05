#include<iostream>
#define MAX 5
//Coded by Amrit Ray
using namespace std;
void LinearSearch(int [],int);
int main()
{      int arr[MAX];
       int key;
    cout<<"Enter the 5 elements of the array:\n";
    for(int i=0;i<MAX;i++)
        {
            cin>>arr[i];

        }
    cout<<"\n";
    cout<<"Enter the element to find:\n";
     cin>>key;
    LinearSearch(arr,key);
return 0;
}

void LinearSearch(int parr[],int k)
{ int flag=0;
for(int i=0;i<MAX;i++)
    {
     if(parr[i]==k)
        {
            flag=1;
            cout<<"Number is found at location "<<i+1<<"\n";
            break;
        }
    }
if(flag==0)
cout<<"Number is not found in your array\n";
}