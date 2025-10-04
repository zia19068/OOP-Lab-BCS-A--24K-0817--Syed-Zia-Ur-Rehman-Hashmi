#include<iostream>
using namespace std;
class ServerSession{
	int sessionID;
	public:

		ServerSession(int sessionID){
			this->sessionID=sessionID;
			cout<<"The session "<<sessionID<<" started and resource acquired."<<endl;
			
		}
		~ServerSession(){
			cout<<"The session "<<sessionID<<" is ending and the resource is released."<<endl;
		}
};
int main(){
	ServerSession obj1(101);
	{
		ServerSession obj2(202);
		ServerSession obj3(303);
	}
	ServerSession obj4(404);
	
}
