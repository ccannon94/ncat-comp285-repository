//
// Created by Christopher Cannon on 17/Nov/17.
//

/*
Use dynamic programming to improve the performance of the following recursive function.

int D(int n){
    if (n < 1) return -1;
    if (n == 1) return 0;
    if (n == 2) return 1;
    return (n-1)(D(n-1)+D(n-2));


    To be graded, your program must be in your pgm and named precisely as
    6.cpp.
*/

int knownD[100];

int D(int n) {
    if(n < 1) return -1;
    if(n == 1) return 0;
    if(n == 2) return 1;
    if(knownD[n] != 0) return knownD[n];
    return knownD[n] = (n-1)*(D(n-1)+D(n-2));
}