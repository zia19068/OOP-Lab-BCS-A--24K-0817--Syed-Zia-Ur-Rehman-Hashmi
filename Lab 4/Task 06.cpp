#include<iostream>
using namespace std;
class OrderDetails{
	int orderID;
	string itemName;
	const double deliveryFee;
	public:
		OrderDetails(int orderID,string itemName, double fee ) : deliveryFee(fee){
			this->orderID = orderID;
			this->itemName = itemName;
		}
		~OrderDetails(){
			cout<<"The order's specific " <<orderID <<" is being Archived and memory cleared"<<endl;
		}
		void display(){
			cout<<"Order ID: "<<orderID<<endl<<"Item Name: "<<itemName<<endl<<"Delivery Fee:"<<deliveryFee<<endl;
		}
};
int main(){
	OrderDetails order1(101,"Burger",100);
	order1.display();
	OrderDetails order2(202,"Pizza",100);
	order2.display();
}
