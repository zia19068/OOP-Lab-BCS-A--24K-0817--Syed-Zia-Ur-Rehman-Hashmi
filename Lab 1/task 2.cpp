#include<iostream>
using namespace std;
int main(){
	int num,i,j,k;
	cout<<"Enter Number Of Rows: ";
	cin>>num;
	for(i = 1 ; i <= num ; i++){
		for(j = 0 ; j < num-i ; j++){
			cout<<" ";
		}
		for(k = 0 ; k < 2*i-1 ; k++){
			cout<<char(65+k);
		}
		cout<<endl;
	}
	for(i = num-1 ; i > 0 ; i--){
		for(j = 0 ; j < num-i ; j++){
			cout<<" ";
		}
		for(k = 0 ; k < 2*i-1 ; k++){
			cout<<char(65+k);
		}
		cout<<endl;
	}
}
