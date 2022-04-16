/*
Program Name:           Fibonacci Sequence
Program Purpose:        Make Fibonacci sequence by two ways.
Program Description:    This program calculates and prints Fibonacci sequence using: -Loops -Recursion.

Author:                 Youssef Moataz

Last Modification:      April 16, 2022
Version:                v1.0.3
*/

#include <iostream>

using namespace std;

// functions declaration
string fibonacciSequence(int n);
double fibonacci(double n);

int main() {

    int number;

    cout << "Enter the Fibonacci number to get its value and the sequence : \n";
    cin >> number;

    cout << "The sequence  : " << fibonacciSequence(number) << endl;
    cout << "The number    : " << fibonacci(number);

    return 0;
}

// functions definition
string fibonacciSequence(int n) {

    string sequence;

    double a = 0, b = 1, temp;

    sequence += to_string(a) + " ";

    for (int i = 0; i < n; ++i) {

        temp = b;

        b += a;

        a = temp;

        sequence += to_string(a) + " ";

    }

    return sequence;

}

// This can be used as PC killer by the way
double fibonacci(double n){

    if (n == 0){
        return 0;
    } else if(n == 1){
        return 1;
    }else{
        return fibonacci(n - 1) + fibonacci(n - 2);
    }

}