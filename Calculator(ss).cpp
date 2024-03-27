#include <iostream>
#include <sstream>
#include <cmath>

using namespace std;

double add(double a, double b);
double subt(double a, double b);
double mult(double a, double b);
double div(double a, double b);
double rem(double a, double b); 
double power(double base, double exponent);
double sqRoot(double number);
double absol(double number);
double rndNumber(double number);

int main() {
    double a, b;
    char op;
    cout << "Enter an expression ";

    string input;
    getline(cin, input);

    stringstream ss(input);
    
    ss >> a >> op >> b;

    double result;

    switch (op) {
        case '+':
            result = add(a, b);
            break;
        case '-':
            result = subt(a, b);
            break;
        case '*':
            result = mult(a, b);
            break;
        case '/':
            if (b != 0)
                result = div(a, b);
            else {
                cout << "Error: Division by zero!" << endl;
                return 1;
            }
            break;
        case '%':
            result = rem(a, b); 
            break;
        case 'p': 
            result = power(a, b);
            break;
        case 's': 
            result = sqRoot(a);
            break;
        default:
            cout << "Error: Invalid operator!" << endl;
            return 1;
    }

    cout << "Result: " << result << endl;

    return 0;
}

double add(double a, double b) {
    return a + b;
}

double subt(double a, double b) {
    return a - b;
}

double mult(double a, double b) {
    return a * b;
}

double div(double a, double b) {
    return a / b;
}

double rem(double a, double b) { 
    return fmod(a, b);
}

double power(double base, double exponent) {
    return pow(base, exponent);
}

double sqRoot(double number) {
    return sqrt(number);
}