#include <iostream>
#include <cmath>
using namespace std;

// Function declarations
double add(double a, double b);
double subtract(double a, double b);
double multiply(double a, double b);
double divide(double a, double b);
double power(double base, double exp);
double squareRoot(double a);
double logarithm(double a);
double sine(double a);
double cosine(double a);
double tangent(double a);
int factorial(int n);

int main()
{
    int choice;
    double num1, num2, result;
    int n;

    cout << "==== Scientific Calculator ====" << endl;
    cout << "1. Addition (+)" << endl;
    cout << "2. Subtraction (-)" << endl;
    cout << "3. Multiplication (*)" << endl;
    cout << "4. Division (/)" << endl;
    cout << "5. Power (x^y)" << endl;
    cout << "6. Square Root (√x)" << endl;
    cout << "7. Logarithm (log x)" << endl;
    cout << "8. Sine (sin x in radians)" << endl;
    cout << "9. Cosine (cos x in radians)" << endl;
    cout << "10. Tangent (tan x in radians)" << endl;
    cout << "11. Factorial (n!)" << endl;

    cout << "Enter your choice: ";
    cin >> choice;

    switch (choice)
    {
    case 1:
        cout << "Enter two numbers: ";
        cin >> num1 >> num2;
        result = add(num1, num2);
        break;
    case 2:
        cout << "Enter two numbers: ";
        cin >> num1 >> num2;
        result = subtract(num1, num2);
        break;
    case 3:
        cout << "Enter two numbers: ";
        cin >> num1 >> num2;
        result = multiply(num1, num2);
        break;
    case 4:
        cout << "Enter two numbers: ";
        cin >> num1 >> num2;
        result = divide(num1, num2);
        break;
    case 5:
        cout << "Enter base and exponent: ";
        cin >> num1 >> num2;
        result = power(num1, num2);
        break;
    case 6:
        cout << "Enter a number: ";
        cin >> num1;
        result = squareRoot(num1);
        break;
    case 7:
        cout << "Enter a number: ";
        cin >> num1;
        result = logarithm(num1);
        break;
    case 8:
        cout << "Enter an angle in radians: ";
        cin >> num1;
        result = sine(num1);
        break;
    case 9:
        cout << "Enter an angle in radians: ";
        cin >> num1;
        result = cosine(num1);
        break;
    case 10:
        cout << "Enter an angle in radians: ";
        cin >> num1;
        result = tangent(num1);
        break;
    case 11:
        cout << "Enter an integer: ";
        cin >> n;
        int factResult;
        factResult = factorial(n);
        if (factResult == -1)
        {
            cout << "Error: Factorial of negative number!" << endl;
            return 0;
        }
        else
        {
            cout << "Factorial: " << factResult << endl;
            return 0;
        }
    default:
        cout << "Invalid choice!" << endl;
        return 0;
    }

    cout << "Result: " << result << endl;
    return 0;
}

// Function definitions
double add(double a, double b) { return a + b; }
double subtract(double a, double b) { return a - b; }
double multiply(double a, double b) { return a * b; }
double divide(double a, double b)
{
    if (b == 0)
    {
        cout << "Error: Division by zero!" << endl;
        exit(0);
    }
    return a / b;
}
double power(double base, double exp) { return pow(base, exp); }
double squareRoot(double a)
{
    if (a < 0)
    {
        cout << "Error: Negative number for square root!" << endl;
        exit(0);
    }
    return sqrt(a);
}
double logarithm(double a)
{
    if (a <= 0)
    {
        cout << "Error: Log of non-positive number!" << endl;
        exit(0);
    }
    return log(a);
}
double sine(double a) { return sin(a); }
double cosine(double a) { return cos(a); }
double tangent(double a) { return tan(a); }
int factorial(int n)
{
    if (n < 0)
        return -1;
    int fact = 1;
    for (int i = 1; i <= n; i++)
        fact *= i;
    return fact;
}
