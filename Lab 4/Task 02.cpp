#include<iostream>
using namespace std;
class NUCES_Student{
	int id;
	string name;
	public:
		NUCES_Student(){
			id=0;
			name="Not Registered";
		}
		NUCES_Student(int id){
			this->id=id;
			name="Name Pending";
		}
		NUCES_Student(int id, string name){
			this->id=id;
			this->name=name;
		}
		void display(){
			cout<<"ID: "<<id<<endl<<"Name: "<<name<<endl;
		}
};
int main(){
	NUCES_Student std1;
	std1.display();
	NUCES_Student std2 = NUCES_Student(6817);
	std2.display();
	NUCES_Student std3 = NUCES_Student(1968, "Zia");
	std3.display();
	return 0;
}
