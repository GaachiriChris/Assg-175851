//Create a simple C++ application to check if a customer is qualified
// for a loan.
#include <iostream>
#include <string>
using namespace std;

int main (){
    int age, bankBal, months;
    string crbStat;
    
    cout<<"Input age:\n";
    cin>>age;

    if (age>22){
    cout<<"Input Bank Balanace:\n";
    cin>>bankBal;
     }

    if (bankBal>50000){
    cout<<"Input CRB status:\n";
    cin>>crbStat;
    }
    if (crbStat=="good"){
    cout<<"Input Period Months:\n";
    cin>>months;    
    }
    if(months>6){
        cout<<"\nCustomer Qualifies for Loan.\n";
    }
    else{
        cout<<"\nDoesn't qualify.\n";
    }

return 0;
}