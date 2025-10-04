#include<iostream>
#include<string>
using namespace std;
class CurrencyExchange{
const double PKR_to_USD_Rate;
string& branchName;
int totalTransactions;
public:
CurrencyExchange(double pkrtousd,string& branch,int totalTransactions ) : PKR_to_USD_Rate(pkrtousd) , branchName(branch) {
this->totalTransactions = totalTransactions;
}
double PKR_to_USD(int pkr){
totalTransactions++;
return (pkr*PKR_to_USD_Rate);
}
int getTotalTransactions() {
        return totalTransactions;
    }
  void displayInfo() {
        cout << "Branch: " << branchName << endl;
        cout << "Fixed Rate (PKR -> USD): " << PKR_to_USD_Rate << endl;
        cout << "Total Transactions: " << totalTransactions << endl;
    }
};
int main()
{
    string branch = "Karachi Main Branch";
    CurrencyExchange exch1(280.9,branch,0);
    exch1.displayInfo();

    double pkr;
    cout << "\nEnter PKR amount to convert: ";
    cin >> pkr;

    double usd = exch1.PKR_to_USD(pkr);
    cout << "Equivalent in USD: " << usd << endl;

    cout << "\nAfter transaction:\n";
    exch1.displayInfo();
    return 0;
}
