#include <iostream>
#include <string>
using namespace std;
class MobileDevice{
	string modelName; 
	const int IMEINumber;
	public:
		MobileDevice(string name , int imei) : IMEINumber(imei) {
			modelName=name;
		}
		void verify_details() const {
			cout<<"Model Name:"<<modelName<<endl<<"IMEI Number:"<<IMEINumber<< endl;
		}
};
int main(){
	MobileDevice mob1("Nokia",1234);
	mob1.verify_details();
	MobileDevice mob2("Iphone",5678);
	mob2.verify_details();
	return 0;
	
}

