#include<iostream>
#include<iomanip>
using namespace std;
class calculator{
    int x,y;
    public:
    calculator(){
        x=0;
        y=0;
    }
   calculator(int a,int b){
     x=a;
      y=b;
   }
   int add()
   {
    if(x<0||y<0){
    throw("Enter a number greater than zero!");
    }
   else{
   return (x+y);
       }
   }
   int sub()
   {
    if(x<0||y<0)
    throw("Enter a number greater than zero!");
   else
   return (x-y);
       } 
   int div()
   {
    if(x==0||y==0)
    throw("Enter a number other than zero!");
   else
   {
   return (x/y);
       }
   }
   int mul()
   {
    if(x==0||y==0)
    throw("Enter a number other than zero!");  
   else
   return (x*y);
       }
};
int main() 
    {
    calculator C1(5,0),C2(-2,2),C3;
    try{
       cout<<C1.add()<<endl;
    }catch(const char *msg){
        cerr<<msg<<endl;
    }
    try{
         cout<<C2.sub()<<endl;
        }catch(const char *msg){
        cerr<<msg<<endl;
    }
    try{
        cout<<C3.div()<<endl;
    }catch(const char *msg){
        cout<<msg<<endl;
    }
    try{
        cout<<C3.mul()<<endl;
    }catch(const char * msg){
        cout<<msg<<endl;
    }

     return 0;   
 
}