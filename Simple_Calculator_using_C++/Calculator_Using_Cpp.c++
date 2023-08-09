// Simple Calculator using C++, by RAMAVATH SANTHOSH
#include <iostream>

using namespace std;

int main()
{
    double num1, num2, result;
    char operation;

    // Input the two numbers and the operation

    int end;
    while (end != 0)
    {

        cout << "Enter first number: ";
        cin >> num1;

        cout << "Enter second number: ";
        cin >> num2;

        cout << "Choose an operation (+, -, *, /): ";
        cin >> operation;

        switch (operation)
        {
        case '+':
            result = num1 + num2;
            cout << "Result: " << result << endl;
            cout << "To exit enter 0 or to continue press 1:";
            cin >> end;
            break;
        case '-':
            result = num1 - num2;
            cout << "Result: " << result << endl;
            cout << "To exit enter 0 or to continue press 1:";
            cin >> end;
            break;
        case '*':
            result = num1 * num2;
            cout << "Result: " << result << endl;
            cout << "To exit enter 0 or to continue press 1:";
            cin >> end;
            break;
        case '/':
            if (num2 != 0)
            {
                result = num1 / num2;
                cout << "Result: " << result << endl;
                cout << "To exit enter 0 or to continue press 1:";
                cin >> end;
            }
            else
            {
                cout << "************* R.Santhosh want to say that --------" << endl;
                cout << "Error: Division by zero is not allowed." << endl;
                cout << "To exit enter 0 or to continue press 1:";
                cin >> end;
            }
            break;
        default:
            cout << "Invalid operation selected." << endl;
            cout << "To exit enter 0 or to continue press 1:";
            cin >> end;
        }
    }

    // Perform the selected operation

    return 0;
}
