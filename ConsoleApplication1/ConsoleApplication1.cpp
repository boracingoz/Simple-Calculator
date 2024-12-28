#include <iostream>

using namespace std;

int main()
{
    char operation;
    int number1, number2;

    cout << "Select an operation --> (+,-,*,/): ";
    cin >> operation;

    cout << "Please enter the a number: ";
    cin >> number1;
    cout << "Please enter the second number: ";
    cin >> number2;

    switch (operation)
    {
    case '+':
        cout << number1 << " + " << number2 << " = " << number1 + number2;
        break;
    case '-':
        cout << number1 << " - " << number2 << " = " << number1 - number2;
        break;
    case '*':
        cout << number1 << " * " << number2 << " = " << number1 * number2;
        break;
    case '/':
        if (number2 != 0)
        {
            cout << number1 << " / " << number2 << " = " << number1 / number2;
        }
        else
        {
            cout << "Error divide by zero!";
        }
        break;
    default:
        cout << "Invalid Operation!";
        break;
    }

    return 0;
}
