#include<iostream>
#include<string.h>
#include<iomanip>
class bank_acc{
    char cust_name[40];
    char cust_accno[30];
    float balance;
    public:
        void read_details();
       inline void withdraw();
       inline void depsoit();
        void display_balance();
        void display_details();
        void Search_Acc(char [],char[]);
        };
    void bank_acc::read_details{
        cout<<"\n Enter your name:";
        cin>>cust_name;
        cout<<"\n Enter your Customer Number";
        cin>>cust_accno;
        char ch;
        cout<<"\n Enter type of transaction 'w for withdraw' or 'd for depoist':";
            if(ch=='w')
               withraw();
            else if(ch=='d')
              deposit();
            }
    inline void bank_acc::deposit(){
    float damt;
    cout<<"\n Enter the deposit amount:";
    cin>>damt;
    amount+=damt;
}
   inline void bank_acc::withdraw(){
   float wamt;
   cout<<"\n Enter withdrawal amount:";
   cin>>wamt;
   if(wamt>amount){
    cout<<"\n Cannot withdraw amount:"; 
    cout<<"\n Enter withdraw amount:"
    cin>>wamt;
   }
   amount-=wamt;
}
inline void Search