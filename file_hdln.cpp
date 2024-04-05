#include<iostream>
#include<fstream>
using namespace std;
int main(){
    char txt[30];
cout<<"This is a File Handling program\n";
fstream file;
file.open("abc.txt",ios::in|ios::out);
if(!file){
cout<<"\nError opening File!";
return 0;
        }
cout<<"\n File opened successfully!";
cout<<"\n Enter text to be written in file.";
cin.getline(txt,sizeof(txt));
file<<txt<<endl;
cout<<"\nReading from the file!\n";
file>>txt;
cout<<txt<<endl;
file.close();
return 0;
}