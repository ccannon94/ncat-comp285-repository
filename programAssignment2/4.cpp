//
// Created by Christopher Cannon on 17/Nov/17.
//

/*
In ANSII standard C++, there is no library function to convert an
integer to a string. Your program should develop such a
function. In other words complete the following program using your
itos function. (Use of other C functions is prohibitted)

// this program will read in an integer and convert it to a string



To be graded, your program must be in your pgm
and named precisely as 4.cpp.
 */

#include <iostream>
#include <cstdlib>
#include <string>

using namespace std;

string returnString = "";

string itos(int n) {
    while(n)
    {
        int x=n%10;
        n/=10;
        char i='0';
        i=i+x;
        returnString=i+returnString;
    }
    return returnString;
}


int main(int argc, char* argv[]){
    int n = atoi(argv[1]);
    cout << "file "+ itos(n)+ " .txt" << endl;
    return 0;
}