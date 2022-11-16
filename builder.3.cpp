#include <iostream>
using namespace std;
class student {
	int id;
	char name[50];
	char staf[50];
	int rv;
	char dr[50];
	int er;
	int ceo;
	int k,n;
	

public:
	student();
	void display();
};

student::student()
{
	cout<<"Enter No Of Cafe : ";
	cin>>n;
	for(k=1 ; k<=n ;k++){
	cout << "Enter the Cafe Id :";
	cin >> id;

	cout << "Enter the Cafe Name:";
	cin >> name;

	cout << "Enter the Cafe Type :";
	cin >> staf;

	cout << "Enter the Cafe Rating  :";
	cin >> rv;

	cout << "Enter the Cafe Location(city name) :";
	cin>>dr;
	
	cout << "Enter the Cafe Estabalish Year :";
	cin>>er;
	
	cout << "Enter the Cafe Staff Quantity : ";
	cin>>ceo;
	
	cout<<endl<<endl;
}
}

void student::display()
{
	cout << endl;
	cout << endl;
	
	cout<<"DETAILS OF THE CAFE "<<endl<<endl;
	for(k=1 ; k<=n ; k++){
	
	cout <<"Id :"<< id<< endl;
	cout<<"Cafe Name : "<< name<< endl;
	cout<<"Cafe Type : "<< staf<< endl;
	cout<<"Cafe Rating : " <<rv<< endl;
	cout<<"Cafe Location(city name) : " <<dr<<endl;
	cout<<"Cafe Estabalish Year : "<<endl<<endl;
}
}

int main()
{
	student s;
	s.display();

	return 0;
}
