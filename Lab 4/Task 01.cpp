#include<iostream>
using namespace std;
class MobileAccount{
	double balance;
	string phoneNumber;
	public:
	MobileAccount(){
		balance=50.0;
		phoneNumber="";
	}
	MobileAccount(string phoneNumber,double balance){
		this->phoneNumber=phoneNumber;
		this->balance=balance;
	}
	void display(){
		cout<<"Phone Number: "<<phoneNumber<<endl<<"Balance: "<<balance<<endl;
	}
};
int main(){
	MobileAccount mob0;
	mob0.display();
	MobileAccount mob1= MobileAccount("0336-0376541",250);
	mob1.display();
	MobileAccount mob2= MobileAccount("0333-2318941",400);
	mob2.display();
}
