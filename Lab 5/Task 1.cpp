#include <iostream>
#include <string>
using namespace std;
class PetrolPump{
	public:
	static float pricePerLiter;
	int pumpID;
	float litersFilled;
	PetrolPump(){
		pumpID=0;
		litersFilled=0.0;
	}
	PetrolPump(int pumpID,float litersFilled){
		this->pumpID=pumpID;
		this->litersFilled=litersFilled;
	}
	
	void printReceipt(){
		float total;
		total = litersFilled*pricePerLiter;
		cout<<"-----Recipt-----"<<endl<<"Pump ID: "<<pumpID<<endl<<"Price Per Liter: "<<pricePerLiter<<endl
		<<"Liters Filled: "<<litersFilled<<endl<<"Total Price:"<<total<<endl;
		
		
	}
	};
float PetrolPump :: pricePerLiter = 282.50;
int main(){
	
	PetrolPump pump1= PetrolPump(1001,10.5);
	pump1.printReceipt();
	int no;
	cout<<"Enter Number of Pumps:"<<endl;
	cin>>no;
	PetrolPump pumps[no];
	for(int i=0; i<no; i++){
		int a;
		float b;
		cout<<" Enter Pump ID:";
	    cin>>a;
	    cout<<" Enter Liter:";
	    cin>>b;
	    
		pumps[i]= PetrolPump(a,b);
			
	}
	for(int i=0; i<no; i++){
		pumps[i].printReceipt();
			}
	
	return 0;
}
