#include<iostream>
using namespace std;
class Traint
public:
int train _no;
int train_time;
char train_name[100];
char train_sourse[1001;
char train_destination[100];
void setdata(){
 cout‹"Enter Number:-";
cin>›train no;
cout<‹"Enter Name;-";
cin>›train name;
void searchdata(Train train[],int a){

int 1=0;
for(i=0; is=2 ; i++){
if(a == train[i].train_ no){

cout«‹"Train Number "«‹train[i].train no<<endl;
cout‹‹"Train Name"‹‹train[i].train name<<endl;
}
}
}
main(){
Train train[3];
int i=0;
for(i=0 ;i<=2;i++){
	train[i].setdata();
}
int search;
cout<<"enter trainnuber;-";
cin>>search;
searchdata(train,search);
}


