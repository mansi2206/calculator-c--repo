#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
using namespace std;


void calculatorSum(int num1 , int num2){
    char o;
    cout << "Enter the operator (+, -,*, /,): ";
    cin >> o;
    
     num1;
    cout << "Enter first number: ";
    cin >> num1;
    
     num2;
    cout << "Enter second number: ";
    cin >> num2;

   
    
    switch(o){
        case '+':
        cout <<"Addition of two numbers is: "<< num1 + num2 << endl;
        break;
        
        case '-':
        cout <<"Difference of two numbers is: "<< num1 - num2 << endl;
        break;
        
        case '*':
        cout <<"Multiplication of two numbers is: "<< num1 * num2 << endl;
        break;
        
        case '/':
        cout <<"Division of two numbers is: "<< num1 / num2 << endl;
        break;

        default: // this means that if none of the cases match tb do this.
        cout <<"ente the correct operator" << endl;
        break;
    }

}


int main(){

    calculatorSum(8, 7);
    return 0;

}
