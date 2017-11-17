//
// Created by Christopher Cannon on 17/Nov/17.
//

/*
Complete the following program. This program determines the hidden
password encoded in the function pass. The password is at most made up of
some given k unique numerical digits. The length of the password is given
at runtime on the command line. The length of the password ,k, will be between
2 and 10 inclusively. Your program must determine the correct password in
10!/(10-k)! attempts in order to be evaluated as correct.

//------------------------------------------------------------------
// Header/Prototype for pass.o

#include <iostream>
using namespace std;

int pass(char* a);
// Compares the c_string a to its hidden c_string p.
// If the same then returns the value 0
// Else returns the value -1

//-------------------------------------------------------------------

//-------------------------------------------------------------------
// Simple Driver program to check user guess against password hidden in
// pass.o (5.cpp)

#include <iostream>
#include "pass.h"
using namespace std;

int main(int argc, char* argv[]){
	if(argc > 1) {
		if(pass(argv[1])== 0) cout << " Correct password \n" << argv[1] << endl;
		else cout << "Incorrect password \n";
	return 0;
	}
	return -1;
}

/-------------------------------------------------------------------

Your job is to modify the file 5.cpp so that it finds the password
encoded in pass.o.

To link the object file pass.o to your 5.cpp program the following must
be
done.

Step 1: Compile your code (5.cpp) like so:

	g++ -c 5.cpp

Step 2: Link the two object files together:
	g++ pass.o 5.o

Step 3: ./a.out <integer>

Example1:
For the test driver above (5.cpp), the following example could be
executed.

Input:

./a.out 123457

Output:

Incorrect password

Example2:

Input:

./a.out 123456

Output:

Correct password 123456

You will find all the files required (pass.h, pass.o and 5.cpp) in your
pgm directory.

This program counts as three regular programs. To be graded, your
program must be in your pgm and named precisely as 5.cpp.
 */