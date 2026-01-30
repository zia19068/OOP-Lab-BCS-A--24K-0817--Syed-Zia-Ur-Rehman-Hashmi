#include<iostream>
using namespace std;
int main(){
	int amount;
	cout<<"Please enter the amount:";
	cin>>amount;
	if(amount<0){
		cout<<"\nPlease enter positive amount"<<endl;
	}
	int notes[]={5000,1000,500,100,50,20,10,5,2,1};
	int notecount;
	for(int i=0; i<10 ;i++){
		notecount=amount/notes[i];
		if(notecount>0){
			cout<<notes[i]<<"x"<<notecount<<endl;
			amount=amount-(notes[i]*notecount);
		}
	}
	

}

