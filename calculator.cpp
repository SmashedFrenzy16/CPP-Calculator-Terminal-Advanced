#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    double num1, num2;
    char op;

    cout << "Enter your first number: ";
    cin >> num1;

    cout << "Enter your second number: ";
    cin >> num2;

    cout << "Enter your operator: ";
    cin >> op;

    switch(op) {

        case '+':

            cout << num1 + num2 << "\n";
            break;
        
        case '-':

            cout << num1 - num2 << "\n";
            break;
        
        case '*':

            cout << num1 * num2 << "\n";
            break;
        
        case '/':

            cout << num1 * num2 << "\n";
            break;
        
        default:
            
            cout << "Error! Operator not valid!\n";
            break;

    }


}