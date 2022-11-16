#include <iostream>
#include <string.h>

using namespace std;

class student{
	private:
		char name[30];
		int rollNo;
	public:
		void getStudent(){
			strcpy(name,"ruchi");
			rollNo=85;
		}
		void printStudent(){
			cout<<"Name: "<<name<<",Roll No.: "<<rollNo<<endl;
		}
};

class classDetails{
	private:
		char clsName[30];
		student std; //object
	public:
		void getClassDetails(){
			strcpy(clsName,"Higher Sec.");
			std.getStudent();			
		}
		void printClassDetails(){
			cout<<"Class Name: "<<clsName<<endl;
			std.printStudent();
		}
};

int main()
{
	classDetails CD;
	CD.getClassDetails();
	CD.printClassDetails();
	return 0;
}
