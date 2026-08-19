// Experiment 4: Create a Class and add a function a to input a number from user and check the number is prime or not.
// Experiment 5: Add another function in above created class to input a number from user and print its factorial.
// Experiment 5: Add another function in above created class to input a number from user and print its factorial.
#include <iostream>
using namespace std;

class Prime {
private:
    int num;

public:
    void input();
    void primeChecking();
    void factorial();
}p;

int main(void) {
    p.input();        
    p.primeChecking();    
    cout << endl;    
    p.factorial();
    return 0;
}

void Prime::input() {
    cout << "Enter a Number :- ";
    cin >> num;
}

void Prime::primeChecking() {
    if (num <= 1) {
        cout << num << " is NOT PRIME";
        return;
    }

    bool isPrime = true;
    for (int i = 2; i <= num / 2; i++) {
        if (num % i == 0) {
            isPrime = false;
            break;
        }
    }

    if (isPrime)
        cout << num << " is PRIME";
    else
        cout << num << " is NOT PRIME";
}

void Prime::factorial() {
    if (num < 0) {
        cout << "Factorial is not defined for negative numbers!";
        return;
    }

    long long fact = 1;
    for (int i = 1; i <= num; i++) {
        fact *= i;
    }
    cout << "\nFactorial of " << num << " = " << fact;
}