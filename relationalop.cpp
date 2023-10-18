#include<iostream>

using namespace std;

main(){

    /* Relational Operators */
    int x = 10;
    int y = 5;

    cout << ( x == y ) << endl; // is TRUE (1) when both variables have the same value
    cout << ( x != y ) << endl; // is TRUE (1) when both variables DO NOT have the same value
    cout << ( x > y ) << endl; // is TRUE (1) when value of variable x is greater than y
    cout << ( x < y ) << endl; // is TRUE (1) when value of variable y is greater than x
    cout << ( x >= y ) << endl; // is TRUE (1) when value of variable x is greater or equal than y
    cout << ( x <= y ) << endl; // is TRUE (1) when value of variable y is greater or equal than x

    cout << !( x == y ) << endl; // negation of the result
}