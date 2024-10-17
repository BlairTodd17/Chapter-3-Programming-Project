#include <iostream>
#include <cstdlib>  
#include <ctime>   
using namespace std;

int main() {
    
    srand(static_cast<unsigned int>(time(0)));

    int num1 = rand() % 100 + 1; 
    int num2 = rand() % 100 + 1;  

    cout << "Solve the following problem:\n";
    cout << num1 << " + " << num2 << " = ?\n";


    cout << "Press Enter when you're ready for the solution...";
    cin.get(); 

    int correctAnswer = num1 + num2;
    cout << "The correct answer is: " << correctAnswer << endl;

    return 0;
}