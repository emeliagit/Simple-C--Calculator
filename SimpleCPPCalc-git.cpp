#include <iostream>

using namespace std;

int main()
{
    // introduce floating point units for the sum, difference, product, dividend, and the input numbers.
    double sum, difference, product, num1, num2, dividend;
    // introduce character for operation selection
    char operation, fix;
    // introduce strings for later use
    string opselect;
    string pin;
    string pin2;
    string complete;
    string error;
    string didyoumean;
    // introduction + operation selection
    opselect = "Hello there! Please select the operation you wish to perform.\n available operations are as follows:\n addition (a), subtraction (s), multiplication (m), and division (d).\n Please select an operation by typing the corresponding letter and hitting the Enter key.";
    // first number to go in for operation (pin stands for "please insert number")
    pin = "Alright, now please insert a number.\n";
    // second number to go in for operation
    pin2 = "Fantastic! Now, please do insert a second number.\n";
    // error message
    error = "Sorry, that isn't an available operation at this moment. \n Please restart and try again.";
    didyoumean = "Sorry, that doesn't seem quite right. Did you mean ";
    // completion, each having a prefix to determine which operation they go with
    string acomplete = "Wonderful, thank you. The sum of your two numbers is \n";
    string scomplete = "Wonderful, thank you. The difference of your two numbers is \n";
    string mcomplete = "Wonderful, thank you. The product of your two numbers is \n";
    string dcomplete = "Wonderful, thank you. The dividend of your two numbers is \n";
    // selecting operation
    cout << opselect;
    cin >> operation;
    // the meat of the code, where the calculations happen
    switch (operation) {
        // error message if proper operation is not selected
    default:
        cout << error;
        break;
        // actual operations, 'a' being addition, 's' being subtraction, 'm' being multiplication, and 'd' being division.
    case 'a':
        cout << pin;
        cin >> num1;
        cout << pin2;
        cin >> num2;

        sum = num1 + num2;

        cout << acomplete << sum;
        break;
    case 's':
        cout << pin;
        cin >> num1;
        cout << pin2;
        cin >> num2;

        difference = num1 - num2;

        cout << scomplete << difference;
        break;
    case 'm':
        cout << pin;
        cin >> num1;
        cout << pin2;
        cin >> num2;

        product = num1 * num2;

        cout << mcomplete << product;
        break;
    case 'd':
        cout << pin;
        cin >> num1;
        cout << pin2;
        cin >> num2;

        dividend = num1 / num2;

        cout << dcomplete << dividend;
        break;
    case 'z':
        cout << didyoumean << "'a'?" << "(y/n)";
        cin >> fix;
        if (fix == 'y') {
            cout << pin;
            cin >> num1;
            cout << pin2;
            cin >> num2;

            sum = num1 + num2;

            cout << acomplete << sum;
        }
        break;
    case 'q':
        cout << didyoumean << "'a'?" << "(y/n)";
        cin >> fix;
        if (fix == 'y') {
            cout << pin;
            cin >> num1;
            cout << pin2;
            cin >> num2;

            sum = num1 + num2;

            cout << acomplete << sum;
        }

        break;
    case 'w':
        cout << didyoumean << "'s'?" << "(y/n)";
        cin >> fix;
        if (fix == 'y') {
            cout << pin;
            cin >> num1;
            cout << pin2;
            cin >> num2;

            difference = num1 - num2;

            cout << scomplete << difference;

        }
        break;
    case 'x':
        cout << didyoumean << "'s'?" << "(y/n)";
        cin >> fix;
        if (fix == 'y') {
            cout << pin;
            cin >> num1;
            cout << pin2;
            cin >> num2;

            difference = num1 - num2;

            cout << scomplete << difference;
        }
        break;
    case 'e':
        cout << didyoumean << "'d'?" << "(y/n)";
        cin >> fix;
        if (fix == 'y') {
            cout << pin;
            cin >> num1;
            cout << pin2;
            cin >> num2;

            dividend = num1 / num2;

            cout << dcomplete << dividend;

        }
        break;
    case 'c':
        cout << didyoumean << "'d'?" << "(y/n)";
        cin >> fix;
        if (fix == 'y') {
            cout << pin;
            cin >> num1;
            cout << pin2;
            cin >> num2;

            dividend = num1 / num2;

            cout << dcomplete << dividend;

        }
        break;
    case 'n':
        cout << didyoumean << "'m'?" << "(y/n)";
        cin >> fix;
        if (fix == 'y') {
            cout << pin;
            cin >> num1;
            cout << pin2;
            cin >> num2;

            product = num1 * num2;

            cout << mcomplete << product;

        }
        break;
    case 'k':
        cout << didyoumean << "'m'?" << "(y/n)";
        cin >> fix;
        if (fix == 'y') {
            cout << pin;
            cin >> num1;
            cout << pin2;
            cin >> num2;

            product = num1 * num2;

            cout << mcomplete << product;

        }
        break;
    case ',':
        cout << didyoumean << "'m'?" << "(y/n)";
        cin >> fix;
        if (fix == 'y') {
            cout << pin;
            cin >> num1;
            cout << pin2;
            cin >> num2;

            product = num1 * num2;

            cout << mcomplete << product;

        }
        break;
    }

    return 0;
}