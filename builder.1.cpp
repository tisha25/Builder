#include <iostream>
using namespace std;

struct student
{
    char name[50];
    int roll;
    int role;
    int age;
    int salary;
    int experince;
    char city[50];
    char company[50];
    
} s[5];

int main()
{
    cout << "Enter Employ information : " << endl << endl;

    for(int i = 0; i <=4 ; ++i)
    {
        s[i].roll = i+1;
        cout << "Employ number" << s[i].roll << "," << endl;

        cout << "Enter name: ";
        cin >> s[i].name;

        cout << "Enter Role: ";
        cin >> s[i].role;
        
        cout << "Enter Age: ";
        cin >> s[i].age;
        
        cout << "Enter Salary : ";
        cin >> s[i].salary;
        
        cout << "Enter Experince : ";
        cin >> s[i].experince;
        
        cout << "Enter City Name: ";
        cin >> s[i].city;
        
        cout << "Enter Company Name : ";
        cin >> s[i].company;

        cout << endl;
    }
    cout << "Displaying Information: " << endl << endl;

    for(int i = 0; i <=4 ; ++i)
    {
        cout << "\n Employ : " << i+1 << endl;
        cout << "Name : " << s[i].name << endl;
        cout << "Role : " << s[i].role << endl;
        cout << "Age  : " << s[i].age << endl;
        cout << "salary : " << s[i].salary << endl;
        cout << "Experince : " << s[i].experince << endl;
        cout << "City : " << s[i].city << endl;
        cout << "Company Name : " << s[i].company << endl;
        
    }

    return 0;
}
