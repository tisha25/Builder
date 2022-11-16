
#include <iostream>
using namespace std;
 
class Demo
{
    private: //Private Data member section
        int X,Y;
    public://Public Member function section
         
        
        Demo()
        {
                X = 0;
                Y = 0;
                 
                cout << endl << "Constructor Called";
        }
        
        ~Demo()
        {
                cout << endl << "Destructor Called" << endl;
        }
         
        
        void getValues()
        {
                cout << endl <<"Enter Value of X : "; cin >> X;
                cout << "Enter Value of Y : "; cin >> Y;
        }
        
        void putValues()
        {
                cout << endl << "Value of X : " << X;
                cout << endl << "Value of Y : " << Y << endl;
        }
};
 

int main()
{
    Demo d1;
     
    d1.getValues();
     
    cout << endl <<"D1 Value Are : ";
    d1.putValues();
     
    Demo d2;
     
    d2.getValues();
    cout << endl <<"D2 Value Are : ";
    d2.putValues();
     
     
    return 0;
}
