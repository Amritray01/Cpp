#include<iostream>
using namespace std;
class cord

  {   
	  float x_cord;
    float y_cord;
  public:
    static int p;
           void get_cord()
            {
            cout<<"Coordinates of A"<<p<<endl;
            cout<<"Enter x-coordinate"<<endl;
            cin>>x_cord;
            cout<<"Enter y_coordinates"<<endl ;
             cin>>y_cord;
             }
        int count1()
         {
          p++;
          return p;
         }
         
       cord add(cord a,cord b){
        cout<<"After addition\n";
        x_cord=a.x_cord+b.x_cord;
        cout<<"The x-coordinate is:\n"<<x_cord<<endl;
        y_cord=a.y_cord+b.y_cord;
        cout<<"The y-coordinate is:\n"<<y_cord<<endl;
    }
     void diff(cord p,cord q){
      cout<<"After difference\n";
      x_cord=q.x_cord-p.x_cord;
      cout<<"The x-coordinate is:\n"<<x_cord<<endl;
      y_cord=q.y_cord-p.y_cord; 
      cout<<"The y-coordinate is:\n"<<y_cord<<endl;         
    }
     cord()
       {
        cord::count1();
         x_cord=0;
         y_cord=0;
          }
void print_data()
         {
           cout<<"The x-coordinate of A"<<p<<" is:\n";
           cout<<x_cord<<endl;
          cout<<"The y-coordinate of A"<<p<<" is:\n";
           cout<<y_cord<<endl;
            }
  };
int cord::p=0;
int main()
{    
     cout<<"Three objects are created!\n";
     cord A1;
    A1.get_cord();
    A1.print_data();
     cord A2;
    A2.get_cord();
    A2.print_data();            
     cord A3;
    A3.print_data();
    A3.add(A1,A2);
    A3.print_data();
    A3.diff(A1,A2);
    A3.print_data();
    return 0;
}