#include <iostream>
using namespace std;

int main() {
    const double SUGAR = 1.5;   
    const double BUTTER = 1.0; 
    const double FLOUR = 2.75; 
    const int COOKIES = 48;    

    int cookiesWanted;
    cout << "How many cookies do you want to make? ";
    cin >> cookiesWanted;

    double sugarNeeded = (SUGAR / COOKIES) * cookiesWanted;
    double butterNeeded = (BUTTER / COOKIES) * cookiesWanted;
    double flourNeeded = (FLOUR / COOKIES) * cookiesWanted;

    cout << "For " << cookiesWanted << " cookies, you will need:\n";
    cout << sugarNeeded << " cups of sugar\n";
    cout << butterNeeded << " cups of butter\n";
    cout << flourNeeded << " cups of flour\n";

    return 0;
}