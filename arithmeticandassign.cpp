#include<iostream>

using namespace std;

main(){
    
    int x = 10;
    int y = 4;

    cout << "Arithmetics Operations" << endl;
    cout << "x = " << x << " y = " << y << endl;
    cout << "Addition optation: " << x + y << endl;
    cout << "Substraction operation: " << x - y << endl;
    cout << "Multiplication operation: " << x * y << endl;
    cout << "Division operation: " << x / y << endl;

    // 10 % 4 = 2 reminder 10 - 8 = 2
    // 1 % 5 = 1

    cout << x % y << endl;

    int c = 1;
    cout << c << endl;
    c = c + 1;
    cout << c << endl;
    c += 1;
    cout << ++c << endl; // ++C Pre increment
    cout << c++ << endl; // C++ Post increment
    cout << c << endl;

    cout << --c << endl; // ++C Pre decrement
    cout << c-- << endl; // C++ Post decrement
    cout << c << endl;


}