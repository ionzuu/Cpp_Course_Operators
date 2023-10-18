#include<iostream>

using namespace std;

main(){

    /*
    
        AND conjunction &&

        7 > 5 && 5 != 10 // conjuntion is TRUE only if both expressions are TRUE

        expr1   expr2   result
         0       0       0
         0       1       0
         1       0       0
         1       1       1

        OR conjunction ||

        expr1   expr2   result
         0       0       0
         0       1       1
         1       0       1
         1       1       1

        ! (exclamation mark) = NOT

        ! (0) the Result will be 1
        ! (1) the Result will be 0

    */

    cout << !( 5 > 7 || 5 != 10 ) << endl;

}