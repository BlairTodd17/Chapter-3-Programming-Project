#include <iostream>
#include <cmath>    
using namespace std;

int main() {
    double principal, rate;
    int timesCompounded;

    cout << "Enter the principal: $";
    cin >> principal;
    cout << "Enter the annual interest rate (as a percentage): ";
    cin >> rate;
    cout << "Enter the number of times the interest is compounded annually: ";
    cin >> timesCompounded;

    
    rate = rate / 100;

   
    double balance = principal * pow(1 + (rate / timesCompounded), timesCompounded);

   
    cout << "\nInterest Report\n";
    cout << "Principal: $" << principal << endl;
    cout << "Annual Interest Rate: " << rate * 100 << "%" << endl;
    cout << "Times Compounded: " << timesCompounded << endl;
    cout << "Balance after one year: $" << balance << endl;

    return 0;
}
