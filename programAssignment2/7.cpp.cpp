//
// Created by Christopher Cannon on 17/Nov/17.
//

/*
Modify the program shell.cpp so that the fiboncacci sequence is used instead of the sequence defined by h = 3*h+1. You should generate the necessary fiboncacci numbers using the dynamic version of the fibonnacci code discussed in class.

Your program must be in your pgm directory and named precisely as 7.cpp
 */

#include <iostream>
using namespace std;
#include <stdlib.h>
#include <fstream>
#include <string>
#include <time.h>

long comparisons = 0;
long exchanges = 0;
ofstream fout("output.txt");

void ran(int a[], int N)
{
    int i;
    srand((unsigned)time(NULL));  //Give us a random array that will be fixed for all sorts
    for(i = 0; i<N; i++)
        a[i] = int(1000*(1.0*rand()/RAND_MAX));
}

void initial(int a[], int b[], int N)
{
    int i;
    for(i =0 ; i < N; i++) a[i] = b[i];
}

void output( int a[], int l, int r)
{
    int i;
    for( i = l; i <= r; i++) fout << a[i] << " ";
    fout << endl;
}


void shellsort(int a[], int l, int r)
{
    int i,j,h, v;
    for(h = 1; h <= (r)/9; h = 3*h+1);
    for( ; h>0; h/=3)
        for(i = l+h; i <= r; i++)
        {
            j =i;
            v = a[i];
            while(j >= l+h && v < a[j-h])
            {
                a[j] = a[j-h];
                j -= h;
            }
            a[j] = v;
        }

}


int main(int argc, char *argv[])
{
    int i, N = atoi(argv[1]), sw = atoi(argv[2]);
    int *a = new int[N], *b = new int[N];
    string filename;
    int choice = 0;
    if(sw)
        ran(a, N);
    else
    {
        cout << "enter file name" << endl;
        cin >> filename;
        ifstream fin(filename.c_str());
        for(i = 0; i < N; i++) fin >> a[i];
    }
    for( i = 0; i < N; i++)
    {
        fout << a[i] << " ";
    }
    fout << endl;
    shellsort(a, 0 , N-1);
    fout << "Shell Sort " << endl;
    output(a, 0, N-1);
    return 0;
}