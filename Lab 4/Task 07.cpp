#include<iostream>
#include<string>
using namespace std;
class SecureBankAccount{
	int accountNumber;
	double balance;
	const string accountType;
	int *logHistory;
	
	public:
		
		SecureBankAccount(int accountNumber,double balance,string accType, int logsize) : accountType(accType) {
			logHistory = new int;
			*logHistory = logsize;
			this->accountNumber = accountNumber;
			this->balance = balance;
			if (balance<500){
				cout<<"Low balance!"<< endl;
			}
		}
		SecureBankAccount(SecureBankAccount& source){
			this->accountNumber = source.accountNumber;
			this->balance = source.balance;
			this->logHistory = new int;
			*this->logHistory = *(source.logHistory);
			
		}
		~SecureBankAccount(){
			cout<<"Destructor called, Memory released for Account Number "<<accountNumber<<"!"<< endl;
			delete[] logHistory;
		}
		void display(){
        cout << "Account Number: " << accountNumber << endl
        << "Balance: " << balance << " PKR" << endl
        << "Account Type: " << accountType << endl
        << "Log History Size: " << *logHistory << endl;
    }
};
int main(){
	SecureBankAccount acc1(1111, 499.0, "Current", 5);
    acc1.display();
    SecureBankAccount acc2(2222, 1000.0, "Current", 6);
    acc2.display();
    cout << "\nCreating a copy of acc2...\n";
    SecureBankAccount acc3 = acc2;
    acc3.display();
	
}
