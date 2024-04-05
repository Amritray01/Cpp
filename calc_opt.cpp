#include<iostream>
using namespace std;
int main()
{
 cout<<"Hello this is VS code IDE\n";
int a,b,opr;
char ch;
do{ 
cout<<"Enter a number\n";
cin>>a;
cout<<"Enter another number\n";
cin>>b;
cout<<"1.Addition\n 2.Subtraction\n 3.Multiplication\n 4.Division\n";
cout<<"Enter 1/2/3/4\n";
cin>>opr;
if(opr==1){
    cout<<"a+b="<<a+b;
}
else if(opr==2){
       cout<<"a-b="<<a-b;
}
else if(opr==3){
       cout<<"a X b="<<a*b;
}
else if(opr==4){
       cout<<"a/b="<<(float)a/b;
}
else{
       cout<<"Error!Enter correct input 1 or 2 or 3 or 4\n";
}
cout<<"\nTo continue enter(Y) else(N))\n";
cin>>ch;
}
while (ch!='N');
   return 0;
        }