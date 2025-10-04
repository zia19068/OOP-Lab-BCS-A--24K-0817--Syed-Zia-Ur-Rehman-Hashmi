#include<iostream>
using namespace std;
class PropertyDeed{
	int* ownerID;

	public:
	PropertyDeed(int num){
		ownerID =new int(num);
	}
	PropertyDeed(PropertyDeed& obj){
		ownerID = new int(*obj.ownerID);
		
	}/*
	PropertyDeed(PropertyDeed& sample){
		int *ptr = new int;
		*ptr = sample.ownerID ;
	 	}*/
	void display(){
		cout<<"Owner ID: "<<*ownerID<<endl;
			delete[] ownerID;

	}
};
int main(){
	PropertyDeed mem1(34);
	mem1.display();
	PropertyDeed mem2(mem1);
	mem2.display();
	PropertyDeed mem3 = mem1;
	mem3.display();
	PropertyDeed mem4(58);
	mem4.display();
	return 0;
}
