/*********************************************************************
CSCI 330 - Assignment 1 - Fall 2020

Programmer: Leonart Jaos
Z-ID: z1911688
Section: 0002
TA: Saiteja Alubelli
Date Due: September 16, 2020

Purpose: The following is the main function that implements the funct
-ion files defined in rgi.h. The purpose is to use genRndNums() to
fill a vector with random values. We define the vector size in this
file as a global constant. I then use iterators to allow the usage 
of the sort function from <algotithm>. Finally, I call a function
that I defined in rgi.h to print the vector values after they have
been sorted. The final result is a program that fills a vector with
random values with range 1-10,000, sorts and rearranges the values
in ascending order, and prints the values line by line.

**********************************************************************/

// Preprocessing directives-- input/output stream, vector container,
// <cstdlib> for rand(),<algorithm> for sort, <iomanip> for format 
#include<iostream>
#include<vector>
#include<cstdlib>
#include<algorithm>
#include<iomanip>

using namespace std;

#include "rgi.h"

// Add needed constants
// global variable defining vector size
int VEC_SIZE=200;
// Add code for genRndNums
// Add code for printVec

int 
main() 
{
// Declare vector v
// vector with type <int>
     vector<int> v;
// fills vector "v" with random integers of range 1-10,000
// seed value is set to 1 in function as well
// Generate random numbers to fill vector v	
     genRndNums(v);
// Using STL sort sort v
// sort function utilizes iterators so we initialize those 
// here
auto p=v.begin();
auto b=v.end();
     sort(p,b);
// Print vector of sorted random numbers
     printVec(v);
    return 1;
}


