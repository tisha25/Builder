#include<iostream>

using namespace std;

class account
{
	int acno;
	char name[50];
	int deposit;
	char type;
};

void write_account();
void print();
void Withdraw();
void transfer();

int main()
{
	//first page of bank managment system
	char ch;
	int num;
	char a;
	do
	{
	system("CLS");
	cout<<"\n\n\t\t\t    -: BANK MANAGMENT SYSTEM :-\n";
	cout<<"\t\t\t_ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ ";
	cout<<"\n\n\t\t\t   -: DESIGNED AND PROGRAMED BY :-\n";
	cout<<"\t\t\t_ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ \n\n";
	cout<<"\t\t\t\t RIYA PATEL \n\n\n";
	cout<<"\t\t\t\t -: TRAINED BY :- \n";
	cout<<"\t\t\t_ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ \n\n";
	cout<<"\t\t\t\t   TISHA DODIYA   \n\n\n";
	cout<<"\t\t\tPress Any Key N Enter To Continues.....";
		cin>>ch;
    cout<<"\n\n\n\n\n\n\n\n\n\n";
		switch(ch){
		
			//switch for small latters
			case'a'...'z':
			cout<<"\t\t    _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _\n\n";
			cout<<"\t\t   -: Press A To Log In As Administor Or S To Login As Staff :-\n";
		    cout<<"\t\t    _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _\n";
		    break;
		    //switch for capital latters
		    case'A'...'Z':
			cout<<"\t\t    _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _\n\n";
			cout<<"\t\t   -: Press A To Log In As Administor Or S To Login As Staff :-\n";
		    cout<<"\t\t    _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _\n";
		    break;
		
		default :
			cout<<"Error!";
		}
	cin>>a;
	    switch(a){
	    	//switch for small latters
	    	case 'a':
	    		cout<<"Administor";
	    	break;
	    	case 's':
	    		write_account();
			break;
			//switch for capital latters
			case 'A':
	    		cout<<"Administor";
	    	break;
	    	case 'S':
	    		write_account();
			break;
	    default :
	    	cout<<"Error!";
		}
		cin.ignore();
		cin.get();
    }while(ch!='8');
	return 0;
}

void write_account()//print details as a staff
{
	
	char name[20];
	int no;
	int mo;
	char email[20];
	int money;
	
	cout<<endl<<endl<<endl<<endl<<endl;
	cout<<"\t\t    _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _\n\n";
	cout<<"\t\t\t\t -: Welcocme As A Staff :- \n";
	cout<<"\t\t    _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _\n\n\n";
	cout<<"\t\t\tEnter The Name Of Staff : ";
	cin >>name;
	cout<<"\t\t\tEnter The Account Number Of Staff : ";
	cin>>no;
	cout<<"\t\t\tEnter The Phone Number Of Staff : ";
	cin>>mo;
	cout<<"\t\t\tEnter The Email Of Staff : ";
	cin>>email;
	cout<<endl<<endl<<endl<<endl<<endl;
	
	

	cout<<"\t\t    _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _\n\n";

	cout<<"\t\t    Name \t\t\t : "<<name<<endl;
	cout<<"\t\t    Account No\t\t\t : "<<no<<endl;
	cout<<"\t\t    Mobile No\t\t\t : "<<mo<<endl;
	cout<<"\t\t    Email\t\t\t : "<<email<<endl;
	
	cout<<"\t\t    _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _";
	
	cout<<endl<<endl<<endl;
	
	
	cout<<"\t\t\t\tPress [1] To Deposit The Money :"<<endl;
	cout<<"\t\t\t\tPress [2] To Transfer The Money :"<<endl;
	cout<<"\t\t\t\tPress [3] To Withdraw The Money :"<<endl;
	
	cin>>money;
	
	//switcj to get uper 1=deposit ,2=transfer ,3=withdraw , function 
	switch(money){
		case 1 :
			print();
			break;
		case 2 :
			transfer();
		    break;
		case 3 :
		    Withdraw();
			break;
}
}
void print(){
	
	// function to deposit ammount 
	int z;

   	cout<<"Enter Deposit Ammount : ";
   	cin>>z;
   	cout<<"Your Ammount => "<<z;
    cout<<" will successfully deposited on your account"<<endl;
   	cout<<"Total Amount In Your Account : "<<z<<endl;
   	
}
void transfer(){
	
	//function to transfer ammount 
	int s;
	cout<<"Enter Transfer Ammount : ";
	cin>>s;
	cout<<"Your Ammount Will Successfully Transfered..."<<endl;
	cout<<"Total Amount In Your Account : 145600 "<<endl;
} 
void Withdraw(){ 

	//function to withdraw ammount 
	cout<<"\t\t    _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _\n\n";
   	cout<<"\t\t\t\tWithdraw The Money : 20,000"<<endl;
   	cout<<"\t\t    _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _\n\n";
   	cout<<"\t\t\tYour Actual Ammount Is : 2,00,000 "<<endl;
   	cout<<"\t\t\tCongrets Your Ammount Has  Withdraw Successfully....."<<endl;
   	cout<<"\t\t\tYour Account Balance Is : 1,80,000";
   }
