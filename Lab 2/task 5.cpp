#include <iostream>
#include <cstring>

using namespace std;

int main() {
   char *firststr;
   char *secondstr;
   char *thirdstr;
    firststr = new char[100];
    secondstr= new char[100];
    cout<<" Enter First String: ";
    cin>>firststr;
    cout<<endl;
    cout<<" Enter Second String: ";
    cin>>secondstr;
    cout<<endl;
    int totallen;
    int len1 = strlen(firststr);
    int len2 = strlen(secondstr);
    totallen = len1 + len2 +1;
    thirdstr= new char[totallen];
    strcpy(thirdstr,firststr);
    strcat(thirdstr,secondstr);
    cout<<" Third String is : ";
    cout<<thirdstr<<endl;
    delete[] firststr;
    delete[] secondstr;
    delete[] thirdstr;
    return 0;
}

