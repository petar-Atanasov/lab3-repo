#include <iostream>

using namespace std;

int main () 
{ 
    double number1, number2;

    cout << " Enter first number: ";
    cin >> number1;
    cout << "Enter second number: ";
    cin >> number2;

    double sum = number1 + number2;
    cout << " The sum of  " << number1 <<  " and "  << number2 << " is " << sum << endl;

    double difference = number1 - number2;
    cout << " The difference between " << number1  << " and " << number2 << " is " << difference << endl;

    double product = number1 * number2;
    cout << " The product of " << number1 << " and " << number2 << " is " << product << endl;

    double distance = abs(difference);
    cout << " The distance between " << number1 << " and " << number2 << " is " << difference << endl;

    double average = (number1 + number2) / 2;
    cout << " The mean average of " << number1 << " and " << number2 << " is " << average << endl;
    
     return 0;


}