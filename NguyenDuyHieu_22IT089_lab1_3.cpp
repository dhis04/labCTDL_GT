#include <iostream>
using namespace std;

int gcd(int num1, int num2) {
    if (num2 == 0)
        return num1;
    else
        return gcd(num2, num1 % num2);
}

int lcm(int num1, int num2, int common) {
    if (common % num1 == 0 && common % num2 == 0)
        return common;
    else
        return lcm(num1, num2, common + 1);
}

int main() {
    int num1, num2;
    cout << "Enter first number: ";
    cin >> num1;
    cout << "Enter second number: ";
    cin >> num2;
    cout << "GCD of the two numbers is: " << gcd(num1, num2) << endl;
    cout << "LCM of the two numbers is: " << lcm(num1, num2, max(num1, num2)) << endl;
    return 0;
}
