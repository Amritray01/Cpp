#include <iostream>
#include <fstream>
using namespace std;
int main(){
 char text[200];
 fstream file;
 file.open ("exp.txt", ios::out | ios::in );
 if(!file)
 {
 cout<<"Error in creating file!!!"<<endl;
 return 0;
 }
 
 cout<<"File created successfully."<<endl;
 cout << "Write text to be written on file." << endl;
 cin.getline(text, sizeof(text));
 // Writing on file
 file << text << endl;
 // Reding from file
 file >> text;
 cout << text << endl;
 //closing the file
 file.close();
 return 0;
}
